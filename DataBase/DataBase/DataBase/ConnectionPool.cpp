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
			//阻塞消费者，等待通知
			cond.wait(locker);
		}
		addConnection();
		//唤醒所有线程，生产者不受影响，因为一直持有锁，实际等于只唤醒了消费者
		cond.notify_all();
	}
}

//回收过长时间未使用连接
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
	//子线程使用类的非静态成员函数，传入this（任务函数的所有者）
	//单例的实例this

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
	//防止unique_lock未解锁就delete
	std::this_thread::sleep_for(std::chrono::seconds(1));
}

ConnectionPool* ConnectionPool::GetPool(const int max, const int min)
{
	//双重检查锁定
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
	//互斥锁
	//注意多线程竞争问题
	//用unique_lock实现离开作用域后自动解锁,构造时自动加锁
	std::unique_lock<std::mutex> locker(mutex);
	//实现消费者模型
	while (connection_queue.empty())
	{
		//ToDo:检测是否到达最大连接数
		//如果到达最大连接数就阻塞
		//未到达则通知生产者继续生产
		
		//条件变量因时限耗尽被唤醒
		//std::cv_status::timeout = 1(true)
		//wait_for()阻塞等待通知并且解锁 时间到后自动解除阻塞，加锁
		if (std::cv_status::timeout == cond.wait_for(locker, std::chrono::milliseconds(timeout)))
		{
			if (connection_queue.empty())
			{
				continue;
			}
		}
	}
	//自定义删除器deleter
	std::shared_ptr<Connection> p(connection_queue.front(),[this](Connection* conn) {
		//和unique_lock作用相似
		std::lock_guard<std::mutex> locker(mutex);
		conn->refreshAliveTime();
		connection_queue.push(conn);
		});
	connection_queue.pop();
	//唤醒所有阻塞线程，竞争锁
	//唤醒生产者，也把消费者唤醒了，但消费者会继续循环，不影响程序
	cond.notify_all();
	return p;
}