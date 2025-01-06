#pragma once
#include <ostream>
#include <vector>

using namespace std;

class mySet {
    protected:
        vector <int> elts;
        int size;
    public:
        mySet();
        bool isempty();
        bool isfound(int);
        bool addelt(int);
        bool deleteelt(int);
        void setelts(const vector<int> &);
        void setsize(int);
        vector <int> & getelts();
        int getsize();
        mySet Union(mySet &);
        mySet Intersection(mySet &);
        mySet Difference(mySet &);
        friend ostream & operator<<(ostream &, mySet &);
        bool operator==(mySet &);

};




