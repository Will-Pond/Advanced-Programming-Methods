
#include "OrderedSet.h"
#include <algorithm>

OrderedSet OrderedSet::Union(OrderedSet OS) {
    mySet ms = mySet::Union(OS);
    OrderedSet temp =  OrderedSet(ms);
    temp.SortSet();
    return temp;

}

OrderedSet OrderedSet::Intersection(OrderedSet OS) {
    mySet ms = mySet::Intersection(OS);
    OrderedSet temp =  OrderedSet(ms);
    temp.SortSet();
    return temp;
}

OrderedSet OrderedSet::Difference(OrderedSet OS) {
    mySet ms = mySet::Difference(OS);
    OrderedSet temp =  OrderedSet(ms);
    temp.SortSet();
    return temp;

}


OrderedSet ::OrderedSet(mySet S) {
    setsize(S.getsize());
    setelts(S.getelts());

}

void OrderedSet::SortSet() {
    sort(elts.begin(), elts.end());

}

bool OrderedSet::addelt(int x) {


    if(!isfound(x)) {
        size++;
        elts.push_back(x);
        SortSet();
        return true;
    }
    return false;


}







