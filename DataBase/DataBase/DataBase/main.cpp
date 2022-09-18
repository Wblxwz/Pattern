#include <iostream>
#include <Windows.h>
#include "ConnectionPool.h"

void op(ConnectionPool* pool, const int begin, const int end)
{
	for (int i = begin; i < end; ++i)
	{
		std::shared_ptr<Connection> conn = pool->getConnection();
	}
}

int main(int argc, char* argv[])
{
	int max = 0, min = 0;
	std::cout << "请输入线程池最大连接数:\n";
	std::cin >> max;
	std::cout << "请输入线程池最小连接数:\n";
	std::cin >> min;

	ConnectionPool* pool = ConnectionPool::GetPool(max,min);
	std::thread t1(op, pool, 0, 1000);
	std::thread t2(op, pool, 1000, 2000);
	std::thread t3(op, pool, 2000, 3000);
	std::thread t4(op, pool, 3000, 4000);
	std::thread t5(op, pool, 4000, 5000);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();

	return 0;
}