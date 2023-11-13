#include "database_connection.h"

Database::Database(const std::string& dbName)
{
	sqlite3_open_v2(dbName.c_str(), &pDb_, SQLITE_OPEN_CREATE, nullptr);
}
Database::~Database()
{

}

int Database::FastExecute(const std::string& query)
{
	char data[100]{ "Data" };
	sqlite3_exec(pDb_, query.c_str(), nullptr, data, zErr_);
}

