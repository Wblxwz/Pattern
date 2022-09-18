#include "ConnectionPool.h"
#include <thread>
#include <iostream>

ConnectionPool* ConnectionPool::pool = nullptr;
int ConnectionPool::max_connection = 0;
int ConnectionPool::min_connection = 0;
std::mutex ConnectionPool::sigle_mutex;

void ConnectionPool::addConnection()
{
	Connection* p = new Connection;
	p->connect(host, username, password, dbname, port);
	p->refreshAliveTime();
	connection_queue.push(p);
}

void ConnectionPool::produce()
{
	while (true)
	{
		std::unique_lock<std::mutex> locker(mutex);
		if (connection_queue.size() >= min_connection)
		{
			//���������ߣ��ȴ�֪ͨ
			cond.wait(locker);
		}
		addConnection();
		//���������̣߳������߲���Ӱ�죬��Ϊһֱ��������ʵ�ʵ���ֻ������������
		cond.notify_all();
	}
}

//���չ���ʱ��δʹ������
void ConnectionPool::recycle()
{
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		std::unique_lock<std::mutex> locker(mutex);
		while (connection_queue.size() > min_connection)
		{
			Connection* conn = connection_queue.front();
			if (conn->getAliveTime() >= max_idletime)
			{
				connection_queue.pop();
				delete conn;
			}
			else
			{
				break;
			}
		}
	}
}

ConnectionPool::ConnectionPool(const int max,const int min)
{
	this->min_connection = min;
	this->max_connection = max;
	for (int i = 0; i < min_connection;++i)
	{
		addConnection();
	}
	//���߳�ʹ����ķǾ�̬��Ա����������this���������������ߣ�
	//������ʵ��this

	std::thread producter(&ConnectionPool::produce, this);
	std::thread recycler(&ConnectionPool::recycle, this);
	producter.detach();
	recycler.detach();
}

ConnectionPool::~ConnectionPool()
{
	while (!connection_queue.empty())
	{
		Connection* c = connection_queue.front();
		connection_queue.pop();
		delete c;
	}
	//��ֹunique_lockδ������delete
	std::this_thread::sleep_for(std::chrono::seconds(1));
}

ConnectionPool* ConnectionPool::GetPool(const int max, const int min)
{
	//˫�ؼ������
	if (pool == nullptr)
	{
		sigle_mutex.lock();
		if (pool == nullptr)
		{
			pool = new ConnectionPool(max, min);
		}
		sigle_mutex.unlock();
	}
	return pool;
}

std::shared_ptr<Connection> ConnectionPool::getConnection()
{
	//������
	//ע����߳̾�������
	//��unique_lockʵ���뿪��������Զ�����,����ʱ�Զ�����
	std::unique_lock<std::mutex> locker(mutex);
	//ʵ��������ģ��
	while (connection_queue.empty())
	{
		//ToDo:����Ƿ񵽴����������
		//����������������������
		//δ������֪ͨ�����߼�������
		
		//����������ʱ�޺ľ�������
		//std::cv_status::timeout = 1(true)
		//wait_for()�����ȴ�֪ͨ���ҽ��� ʱ�䵽���Զ��������������
		if (std::cv_status::timeout == cond.wait_for(locker, std::chrono::milliseconds(timeout)))
		{
			if (connection_queue.empty())
			{
				continue;
			}
		}
	}
	//�Զ���ɾ����deleter
	std::shared_ptr<Connection> p(connection_queue.front(),[this](Connection* conn) {
		//��unique_lock��������
		std::lock_guard<std::mutex> locker(mutex);
		conn->refreshAliveTime();
		connection_queue.push(conn);
		});
	connection_queue.pop();
	//�������������̣߳�������
	//���������ߣ�Ҳ�������߻����ˣ��������߻����ѭ������Ӱ�����
	cond.notify_all();
	return p;
}