#include "Connection.h"
#include <iostream>

Connection::Connection():conn(mysql_init(nullptr))
{

}

Connection::~Connection()
{
	if (conn)
	{
		mysql_close(conn);
	}
}

bool Connection::connect(const char* host, const char* username, const char* password, const char* dbname, unsigned int port)
{
	MYSQL* p = mysql_real_connect(conn, host, username, password, dbname, port, nullptr, 0);
	if (p != nullptr)
	{
		std::cout << "success" << std::endl;
	}
	return p != nullptr;
}

void Connection::refreshAliveTime()
{
	alivetime = std::chrono::steady_clock::now();
}

long long Connection::getAliveTime()
{
	//ÄÉÃë
	std::chrono::nanoseconds res = std::chrono::steady_clock::now() - alivetime;
	//ºÁÃë
	std::chrono::milliseconds millsec = std::chrono::duration_cast<std::chrono::milliseconds>(res);
	return millsec.count();
}