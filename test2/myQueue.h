#pragma once
#include "myStack.h"


class myQueue {
    public:
        vector<Employee> & getElts();
        void Enqueue(Employee);
        Employee Dequeue();
        bool isempty();
        void printQueue();
        myQueue operator+(const myQueue&);
        vector<Employee> elts;
};
