#pragma once

#include <mysql.h>
#include <Windows.h>
#include <chrono>



class Connection
{
public:
	Connection();
	bool connect(const char* host,const char* username,const char* password,const char* dbname,unsigned int port);
	void refreshAliveTime();
	long long getAliveTime();
	~Connection();
private:
	MYSQL* conn;
	std::chrono::steady_clock::time_point alivetime;
};

