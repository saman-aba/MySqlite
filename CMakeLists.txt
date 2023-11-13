cmake_minimum_required(VERSION 3.20)

project(SQLiteCpp)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(sqlite_api STATIC src/database_connection.cpp  src/sqlite/sqlite3.c  "src/database_connection.h")

add_executable(MySqlite src/main.cpp)

target_link_libraries(MySqlite PRIVATE sqlite_api)
 