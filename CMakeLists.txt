cmake_minimum_required(VERSION 3.10)

project(antlr4-mysql-parser)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(runtime)
add_subdirectory(grammar)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} antlr4_static)
target_link_libraries(${PROJECT_NAME} grammar)
