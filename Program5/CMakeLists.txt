cmake_minimum_required(VERSION 3.29)
project(Program5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Program5 main.cpp
        Person.h
        Person.cpp
        Student.cpp
        Student.h
        Faculty.cpp
        Faculty.h
        TeachingAsst.cpp
        TeachingAsst.h
)
