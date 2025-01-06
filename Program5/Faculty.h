#pragma once
#include "Person.h"

using namespace std;

class Faculty : virtual public Person {
    protected:
        string department;
        string office;
        string email;
        string officePhone;
    public:
        Faculty();
        Faculty(string, string, string, string, string, string, string, int, string, string, string, string);
        virtual void printPersonalInfo();
        void printFacultyInfo();

};




