cmake_minimum_required(VERSION 3.29)
project(Program3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Program3 main.cpp
        Employee.h
        Employee.cpp
        myStack.h
        myStack.cpp
        myQueue.h
        myQueue.cpp)
