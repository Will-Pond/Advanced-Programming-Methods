
#pragma once
#include "mySet.h"


class OrderedSet : public mySet {
    public:
        OrderedSet()= default;
        OrderedSet(mySet);
        OrderedSet Union(OrderedSet);
        OrderedSet Intersection(OrderedSet);
        OrderedSet Difference(OrderedSet);
        void SortSet();
        bool addelt(int);
        friend ostream & operator<<(ostream &, const OrderedSet &);
};



