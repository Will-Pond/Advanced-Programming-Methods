#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee() {

    setfirstName("");
    setlastName("");
    setsocsecnum("");
    setdeptNum("");
    setwage(0.0);
}

Employee::Employee(string firstName, string lastName, string socsecnum, string deptNum, double wage) {

    setfirstName(firstName);
    setlastName(lastName);
    setsocsecnum(socsecnum);
    setdeptNum(deptNum);
    setwage(wage);
}

void Employee::setfirstName(string str) {
    firstName = str;
}

void Employee::setlastName(string str) {
    lastName = str;
}

void Employee::setsocsecnum(string str) {
    socsecnum = str;
}

void Employee::setdeptNum(string str) {
    deptNum = str;
}

void Employee::setwage(double amt) {
    wage = amt;
}

string Employee::getfirstName() const {
    return firstName;
}

string Employee::getlastName() const {
    return lastName;
}

string Employee::getsocsecnum() const {
    return socsecnum;
}

string Employee::getdeptNum() const {
    return deptNum;
}

double Employee::getwage() const {
    return wage;
}


bool Employee::operator<(const Employee & other) const {

    if(deptNum < other.deptNum) {
        return true;
    }

     if(deptNum == other.deptNum && lastName < other.lastName) {
        return true;
    }

    if(deptNum == other.deptNum && lastName == other.lastName && firstName < other.firstName){
        return true;
    }

        return false;
}








