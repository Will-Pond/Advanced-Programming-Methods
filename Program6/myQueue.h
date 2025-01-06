#pragma once
#include <vector>

using namespace std;

template<class T>
class myQueue {
public:
    myQueue();
    void enqueue(T &item);
    T dequeue();
    bool isEmpty();
protected:
    vector<T> elts;

};
