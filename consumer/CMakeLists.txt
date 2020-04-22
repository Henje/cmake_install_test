cmake_minimum_required(VERSION 3.11)

project(consumer)

find_package(itest REQUIRED)

add_executable(run src/run.cpp)
target_link_libraries(run PUBLIC itest)