#include "myStack.h"

#include <iostream>
#include <ostream>
#include <ranges>


vector<Employee> &myStack::getElts() {
    return elts;
}

void myStack::Push(Employee obj) {

   getElts().push_back(obj);
}

Employee myStack::Pop() {

    Employee result = getElts().back();
    getElts().erase(getElts().end());
    return result;
}

bool myStack::isempty() {
    if(getElts().size() == 0) {
        cout << "ERROR-STACK IS EMPTY\n" << endl;
        return true;
    }
    else {
        return false;
    }
}

void myStack::printStack() {

    for(int i = getElts().size() - 1; i >= 0; i--) {
        cout << getElts().at(i) << endl;
    }

}

 myStack myStack::operator+(const myStack& other){

    myStack temp = *this;
    myStack result;

    for(int i = 0; i < getElts().size(); i++) {
        result.Push(temp.getElts().at(temp.getElts().size() - 1 - i));
    }


    for(int i = 0; i < other.elts.size(); i++) {
        result.Push(other.elts.at(other.elts.size() - 1 - i));
    }

    return result;
}








