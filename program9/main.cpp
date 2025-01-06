#include <algorithm>
#include <forward_list>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include "myClass.h"

using namespace std;

bool multipfive(const int & value){return (value % 5 == 0);}
bool number99(const int & value){return (value == 99);}


int main() {

    // Part A

    string path1;
    double input1;
    priority_queue<double> pq;

    cout << "Please enter a path for the next data file :";
    cin >> path1;

    ifstream inf1(path1);
    if (!inf1.is_open()) {
        cerr << "Error opening file " << endl;
        return 1;
    }

    cout << "\nPART A. - HEAP SORT\n" << endl;

    while (inf1 >> input1) {
        pq.push(input1);
    }

    inf1.close();

    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    cout << "\nPART B. Sets and Multisets" << endl;

    //Part B
    string path2;
    set<int> set1;
    multiset<int> multiset1;
    int input2;
    cout << "\nPlease enter a path for the next data file :";
    cin >> path2;
    cout << "\n";

    ifstream inf2(path2);
    if (!inf2.is_open()) {
        cerr << "Error opening file " << endl;
        return 1;
    }

    while (inf2 >> input2) {
        set1.insert(input2);
        multiset1.insert(input2);
    }

    inf2.close();

   for(int i = 1; i <= 20; i++) {
      cout << "Count of Set " << i << " is : " << set1.count(i) << " Count of Multiset " << i << " is : " << multiset1.count(i) << endl;
   }

    cout << "\nPART C. Forward Lists" << endl;
    //Part C

    string path3;
    int input3;
    forward_list<int> forward_list1;

    cout << "\nPlease enter a path for the next data file :";
    cin >> path3;
    ifstream inf3(path3);

    if (!inf3.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    while (inf3 >> input3) {
        forward_list1.push_front(input3);
    }

    inf3.close();

    cout << "\nInitial Forward List Contents\n";
    for(auto i = forward_list1.begin(); i != forward_list1.end(); i++) {
        cout << *i << endl;
    }

    cout << "\nAfter Removing multiples of 5\n";

    forward_list1.remove_if(multipfive);

    for(int & i : forward_list1) {
        cout << i << endl;

    }

    cout << "\nRemoving all instance of 99 and SORTING\n";

    forward_list1.remove_if(number99);
    forward_list1.sort();

    for(int & i : forward_list1) {
        cout << i << endl;
    }

    cout << "\nPART D. Maps and Multimaps" << endl;

    string path4;
    string input4;
    int input5;
    map<string, int> map1;
    multimap<string, int> multimap1;
    pair<string, int>pair1;
    pair<string, int>pair2;


    cout << "\nPlease enter a path for the next data file :";
    cin >> path4;
    ifstream inf4(path4);
    if (!inf4.is_open()) {
        cerr << "Error opening file " << endl;
        return 1;
    }

    while (inf4 >> input4 >> input5 ) {

        pair1 = make_pair(input4, input5);
        pair2 = make_pair(input4, input5);

        map1.insert(pair1);
        multimap1.insert(pair2);

    }

    inf4.close();

    cout << "\nMAP Contents\n";
    for(auto i = map1.begin(); i != map1.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    cout << "\nMULTIMAP Contents\n";
    for(auto i = multimap1.begin(); i != multimap1.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    cout << "\nPART E.LISTS of user-defined objects" << endl;
    // Part E

    string path5;
    string ID;
    int DEPT;
    list<myClass> list1;

    cout << "\nPlease enter a path for the next data file :";
    cin >> path5;
    ifstream inf5(path5);
    if (!inf5.is_open()) {
        cerr << "Error opening file " << endl;
        return 1;
    }

    while(getline(inf5, ID)) {
        inf5 >> DEPT;
        myClass object = myClass(ID, DEPT);
        list1.push_back(object);
        inf5.ignore();
    }

    inf5.close();

    list1.sort();

    cout << "\nSORTED List\n";
   for(auto & i : list1) {
       cout << i << endl;
    }

   list1.unique();

    cout << "\nList WITHOUT DUPLICATES\n";
    for(auto & i : list1) {
       cout << i << endl;
    }

    return 0;
}

ostream & operator<<(ostream & os, const myClass & obj) {
     string s = obj.ID;
      s += " ";
      s += to_string(obj.DEPT);
      os << s;
    return os ;
}
