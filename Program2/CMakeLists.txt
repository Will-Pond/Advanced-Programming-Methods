cmake_minimum_required(VERSION 3.29)
project(Program2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Program2 main.cpp
        Account.cpp
        Account.h
        Bank.cpp
        Bank.h
        ATM.cpp
        ATM.h
)
