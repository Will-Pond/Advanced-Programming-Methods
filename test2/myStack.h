#pragma once
#include "Employee.h"
#include <vector>

using namespace std;


class myStack {
    public:
        vector<Employee> & getElts();
        void Push(Employee);
        Employee Pop();
        bool isempty();
        void printStack();
        myStack operator+(const myStack& other);
        vector<Employee> elts;
};
