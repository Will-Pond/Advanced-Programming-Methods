cmake_minimum_required(VERSION 3.29)
project(Program4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Program4 main.cpp
        mySet.cpp
        mySet.h
        OrderedSet.cpp
        OrderedSet.h)
