//
// Created by wpond on 12/7/2024.
//

#include "myClass.h"


myClass::myClass(const string &id, int dept) {
        ID = id;
        DEPT = dept;
}

bool myClass::operator<(const myClass & other) const {

    if(ID < other.ID) {
        return true;
    }

    if(ID == other.ID && DEPT < other.DEPT) {
        return true;
    }
    return false;
}

bool myClass::operator ==(myClass & other) const {
    if(ID == other.ID && DEPT == other.DEPT) {
        return true;
    }
    return false;
}
