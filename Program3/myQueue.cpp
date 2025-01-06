#include "myQueue.h"
#include <iostream>
#include <ostream>

vector<Employee> &myQueue::getElts() {
    return elts;
}


void myQueue::Enqueue(Employee obj) {
    getElts().push_back(obj);
}

Employee myQueue::Dequeue() {
    Employee result = getElts().front();
    getElts().erase(getElts().begin());
    return result;
}

bool myQueue::isempty() {
    if(getElts().size() == 0) {
        cout << "ERROR-QUEUE is EMPTY\n" << endl;
        return true;
    }
    else {
        return false;
    }
}

 void myQueue::printQueue() {
    for(int i = 0; i < getElts().size(); i++) {
        cout << getElts().at(i) << endl;
    }
}

myQueue myQueue::operator+(const myQueue& other) {

    myQueue temp = *this;
    myQueue result;

    for(int i = 0; i < getElts().size(); i++) {
        result.Enqueue(temp.getElts().at(i));
    }

    for(int i = 0; i < other.elts.size(); i++) {
        result.Enqueue(other.elts.at(i));
    }

    return result;
}

