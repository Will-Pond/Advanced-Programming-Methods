#include "myQueue.h"


template<class T>
myQueue<T>::myQueue() = default;


template<class T>
void myQueue<T>::enqueue(T & item) {
 elts.push_back(item);
}

template<class T>
T myQueue<T>::dequeue() {
    T item = elts.front();
    elts.erase(elts.begin());
    return item;
}

template<class T>
bool myQueue<T>::isEmpty() {
 if(elts.size() == 0) {
     return true;
 }
    return false;

}
