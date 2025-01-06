
#include "mySet.h"

mySet::mySet() {
    size = 0;
    elts.clear();

}

bool mySet::isempty() {
    if(elts.size() == 0) {
        return true;
    }
        return false;
}

bool mySet::isfound(int x) {

    for(int i = 0; i < elts.size(); i++) {
        if(elts.at(i) == x) {
            return true;
        }
    }
   return false;

}

bool mySet::addelt(int x) {

    if(!isfound(x)) {
        size++;
        elts.push_back(x);
        return true;
        }
    return false;
}

bool mySet::deleteelt(int x) {
        if(isfound(x)) {
           for(int i = 0; i < elts.size(); i++) {
               if(elts.at(i) == x) {
                   size--;
                   elts.erase(elts.begin() + i);
               }
           }

            return true;
        }
    return false;
}

void mySet::setelts(const vector<int> &vector) {
    elts = vector;
}


void mySet::setsize(int newsize) {
    size = newsize;
}


vector<int> &mySet::getelts() {
    return elts;
}

int mySet::getsize() {

    return size;
}



mySet mySet::Union(mySet & x) {

    mySet temp = *this;
    mySet result;

    for(int i = temp.size - 1; i >= 0; i--) {
        result.addelt(temp.getelts().at(i));
    }

    for(int i = x.elts.size() - 1; i >= 0; i--) {
        result.addelt(x.elts.at(i));
    }

    return result;

}

mySet mySet::Intersection(mySet & x) {

    mySet temp = *this;
    mySet result;

    for(int i = temp.size - 1; i >= 0; i--) {
        for(int j = x.elts.size() - 1; j >= 0; j--) {
            if(temp.elts.at(i) == x.elts.at(j)) {
                result.addelt(temp.getelts().at(i));
            }
        }

    }

    return result;

}

mySet mySet::Difference(mySet & x) {
    mySet temp = *this;
    mySet result;

    for(int i = temp.size - 1; i >= 0; i--) {
        for(int j = x.elts.size() - 1; j >= 0; j--) {
            if(temp.elts.at(i) == x.elts.at(j)) {
                temp.deleteelt(temp.getelts().at(i));
            }
        }

    }
    for(int i = temp.size - 1; i >= 0; i--) {
        result.addelt(temp.getelts().at(i));
    }

    return result;


}


bool mySet::operator==(mySet & x) {
    mySet temp = *this;
    mySet result;
    if(temp.size == x.size) {
        for(int i = temp.size - 1; i >= 0; i--) {
            for(int j = x.elts.size() - 1; j >= 0; j--) {
                if(temp.elts.at(i) == x.elts.at(j)) {
                    result.addelt(temp.getelts().at(i));
                    if(result.elts.size() == x.elts.size() && temp.elts.size() == result.elts.size()) {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}





