#pragma once

#include <iostream>
#include <memory>
#include "sqlite/sqlite3.h"

class Database
{
public:
	/* :memory: : for in memory database. */
	Database(const std::string&);
	~Database();

	int FastExecute(const std::string& query);
		
	//sqlite3_creat_function()

private:
	sqlite3* pDb_;
	char** zErr_{ nullptr };
};
