#pragma once

#include<string>

using namespace std;

class Employee {

    public:
        Employee();
        Employee(string, string, string, string, double);
        string getfirstName() const;
        string getlastName() const;
        string getsocsecnum() const;
        string getdeptNum() const;
        double getwage() const;

        void setfirstName(string);
        void setlastName(string);
        void setsocsecnum(string);
        void setdeptNum(string);
        void setwage(double);

        friend ostream & operator<<( ostream&, Employee&);
        bool operator<(const Employee&) const;

    protected:
        string firstName;
        string lastName;
        string socsecnum;
        string deptNum;
        double wage;
};
