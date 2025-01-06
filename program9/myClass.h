#pragma once
#include <string>

using namespace std;

class myClass {
    protected:
        string ID;
        int DEPT;
    public:
        bool operator<(const myClass &other) const;
        bool operator==(myClass &x) const;
        friend ostream &operator<<(ostream &, const myClass &);
        myClass() = default;
        myClass(const string & id, int dept);
};




