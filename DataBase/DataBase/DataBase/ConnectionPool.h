#pragma once
#include "Connection.h"
#include <queue>
#include <mutex>


//��������ʽ����ģʽ
class ConnectionPool
{
public:
	static ConnectionPool* GetPool(const int max, const int min);
	//����ɾ���������캯���Ϳ������������
	ConnectionPool(const ConnectionPool&) = delete;
	ConnectionPool& operator=(const ConnectionPool&) = delete;
	std::shared_ptr<Connection> getConnection();
	void produce();
	void recycle();
	void addConnection();
private:
	ConnectionPool(const int max, const int min);
	~ConnectionPool();
	static ConnectionPool* pool;
	//���б��뱣�ֶ��̰߳�ȫ����������������������
	std::queue<Connection*> connection_queue;
	std::mutex mutex;
	static std::mutex sigle_mutex;
	//���������������̵߳������뻽��
	std::condition_variable cond;
	//ToDo:�������ļ��ж�ȡ
	static int max_connection;
	static int min_connection;
	//���������ʱ��
	const int max_idletime = 100;
	const int timeout = 1000;
	const char* host = "localhost";
	const char* username = "root";
	const char* password = "a2394559659";
	const char* dbname = "test";
	unsigned int port = 3306;
};
