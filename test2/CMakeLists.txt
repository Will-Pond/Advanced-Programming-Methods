cmake_minimum_required(VERSION 3.29)
project(test2)

set(CMAKE_CXX_STANDARD 20)

add_executable(test2 main.cpp
        Employee.cpp
        myQueue.cpp
        myStack.cpp)
