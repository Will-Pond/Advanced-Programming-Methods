#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Student: virtual public Person {
protected:
    string classRank;
    float gpa;
    string major;
    string minor;
    int credits;
public:
    Student();
    Student(string, string, string, string, string, string, string, int, string, float,  string, string, int);
    virtual void printPersonalInfo();
    void printStudentInfo();

};




