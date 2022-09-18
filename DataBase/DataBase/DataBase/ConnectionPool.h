#pragma once
#include "Connection.h"
#include <queue>
#include <mutex>


//采用懒汉式单例模式
class ConnectionPool
{
public:
	static ConnectionPool* GetPool(const int max, const int min);
	//单例删除拷贝构造函数和拷贝构造运算符
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
	//队列必须保持多线程安全，属于生产者消费者问题
	std::queue<Connection*> connection_queue;
	std::mutex mutex;
	static std::mutex sigle_mutex;
	//条件变量用来做线程的阻塞与唤醒
	std::condition_variable cond;
	//ToDo:从配置文件中读取
	static int max_connection;
	static int min_connection;
	//最长持续连接时间
	const int max_idletime = 100;
	const int timeout = 1000;
	const char* host = "localhost";
	const char* username = "root";
	const char* password = "a2394559659";
	const char* dbname = "test";
	unsigned int port = 3306;
};
