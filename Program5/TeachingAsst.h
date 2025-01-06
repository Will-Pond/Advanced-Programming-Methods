#pragma once
#include "Faculty.h"
#include "Student.h"

using namespace std;

class TeachingAsst : public Student, public Faculty {

    protected:
        int courseLoad;
    public:
        TeachingAsst();
        TeachingAsst(string, string, string, string, string, string, string, int, string, float, string, string, int, string, string, string, string, int);
        virtual void printPersonalInfo() ;

};


