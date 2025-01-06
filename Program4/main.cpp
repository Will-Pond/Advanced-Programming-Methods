#include <fstream>
#include <iostream>
#include <string>

#include "mySet.h"
#include "OrderedSet.h"

using namespace std;

int main() {

    mySet S1;
    mySet S2;
    mySet S3;
    mySet S4;
    mySet S5;
    mySet S6;
    OrderedSet OS1;
    OrderedSet OS2;
    OrderedSet OS3;
    OrderedSet OS4;
    OrderedSet OS5;
    OrderedSet OS6;

    string path1;
    string path2;
    string path3;
    string path4;
    string path5;
    string path6;
    string path7;
    string path8;
    int number;

    cout << "Please enter a path to an input file:";
    cin >> path1;

    ifstream inputFile1(path1);

    if (!inputFile1.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile1 >> number) {
        S1.addelt(number);

    }

    inputFile1.close();


    cout << "Please enter a path to a second input file:";
    cin >> path2;

    ifstream inputFile2(path2);

    if (!inputFile2.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile2 >> number) {
        S2.addelt(number);
    }

    inputFile2.close();

    cout << "BEFORE OPERATIONS" << endl;
    cout << "MySet S1 Contents" << endl;
    cout << "___________" << endl;
    cout << S1 << endl;

    cout << "\nMySet S2 Contents" << endl;
    cout << "___________" << endl;
    cout << S2 << endl;

    cout << "\nMySet S3 Contents" << endl;
    cout << "___________" << endl;
    cout << S3 << endl;

    cout << "\nAfter UNION Operation of S1 and S2" << endl;
    cout << "MySet S3 Contents" << endl;
    cout << "___________" << endl;
    S3 = S1.Union(S2);
    cout << S3 << endl;

    cout << "\nMySet S1 Contents" << endl;
    cout << "___________" << endl;
    cout << S1 << endl;

    cout << "\nMySet S2 Contents" << endl;
    cout << "___________" << endl;
    cout << S2 << endl;

    cout << "\nAfter INTERSECTION Operation of S1 and S2" << endl;
    cout << "MySet S4 Contents" << endl;
    cout << "___________" << endl;
    S4 = S1.Intersection(S2);
    cout << S4 << endl;

    cout << "\nMySet S1 Contents" << endl;
    cout << "___________" << endl;
    cout << S1 << endl;

    cout << "\nMySet S2 Contents" << endl;
    cout << "___________" << endl;
    cout << S2 << endl;

    cout << "\nAfter DIFFERENCE Operation of S1 and S2" << endl;
    cout << "MySet S5 Contents" << endl;
    cout << "___________" << endl;
    S5 = S1.Difference(S2);
    cout << S5 << endl;

    cout << "\nMySet S1 Contents" << endl;
    cout << "___________" << endl;
    cout << S1 << endl;

    cout << "\nMySet S2 Contents" << endl;
    cout << "___________" << endl;
    cout << S2 << endl;

    S6 = S1.Union(S3);

    cout << "\nS3 and S6 ";
    if(S3 == S6) {
        cout << "ARE EQUAL" << endl;
    }
    else {
        cout << "ARE NOT EQUAL" << endl;
    }
    cout << "S1 and S6 ";
    if(S1 == S6) {
        cout << "ARE EQUAL" << endl;
    }
    else {
        cout << "ARE NOT EQUAL" << endl;
    }

    cout << "Please enter a path to a third input file:";
    cin >> path3;

    ifstream inputFile3(path3);

    if (!inputFile3.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile3 >> number) {
        if(S1.addelt(number)) {
            cout << number << " was successfully added to S1" << endl;
        }
        else {
            cout << number << " ALREADY PRESENT IN S1" << endl;
        }

    }

    inputFile3.close();

    cout << "\nS1 AFTER ADDITION of elements" << endl;
    cout << "MySet S1 Contents" << endl;
    cout << "___________" << endl;
    cout << S1 << endl;

    cout << "\nPlease enter a path to a fourth input file:";
    cin >> path4;

    ifstream inputFile4(path4);

    if (!inputFile4.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile4 >> number) {
        if(S1.deleteelt(number)) {
            cout << number << " was successfully deleted from S1" << endl;
        }
        else {
            cout << number << " NOT FOUND" << endl;
        }
    }

    inputFile4.close();

    cout << "\nS1 AFTER DELETION of elements" << endl;
    cout << "MySet S1 Contents" << endl;
    cout << "___________" << endl;
    cout << S1 << endl;

    cout << "\n\nOUTPUT FOR ORDERED SETS\n" << endl;

    cout << "Please enter a path to an input file:";
    cin >> path5;

    ifstream inputFile5(path5);

    if (!inputFile5.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile5 >> number) {
        OS1.addelt(number);

    }

    inputFile5.close();

    cout << "Please enter a path to a second input file:";
    cin >> path6;

    ifstream inputFile6(path6);

    if (!inputFile6.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile6 >> number) {
        OS2.addelt(number);

    }

    inputFile6.close();

    cout <<"BEFORE OPERATIONS" << endl;
    cout << "OrderedSet OS1 Contents" << endl;
    cout << "___________" << endl;
    cout << OS1 << endl;

    cout << "\nOrderedSet OS2 Contents" << endl;
    cout << "___________" << endl;
    cout << OS2 << endl;

    cout << "\nOrderedSet OS3 Contents" << endl;
    cout << "___________" << endl;
    cout << OS3 << endl;

    cout << "\nAfter UNION Operation of OS1 and OS2" << endl;
    cout << "OrderedSet OS3 Contents" << endl;
    cout << "___________" << endl;
    OS3 = OS1.Union(OS2);
    cout << OS3 << endl;

    cout << "\nOrderedSet OS1 Contents" << endl;
    cout << "___________" << endl;
    cout << OS1 << endl;

    cout << "\nOrderedSet OS2 Contents" << endl;
    cout << "___________" << endl;
    cout << OS2 << endl;

    cout << "\nAfter INTERSECTION Operation of OS1 and OS2" << endl;
    cout << "OrderedSet OS4 Contents" << endl;
    cout << "___________" << endl;
    OS4 = OS1.Intersection(OS2);
    cout << OS4 << endl;

    cout << "\nOrderedSet OS1 Contents" << endl;
    cout << "___________" << endl;
    cout << OS1 << endl;

    cout << "\nOrderedSet OS2 Contents" << endl;
    cout << "___________" << endl;
    cout << OS2 << endl;

    cout << "\nAfter DIFFERENCE Operation of OS1 and OS2" << endl;
    cout << "MySet OS5 Contents" << endl;
    cout << "__________" << endl;
    OS5 = OS1.Difference(OS2);
    cout << OS5 << endl;

    cout << "\nMySet OS1 Contents" << endl;
    cout << "___________" << endl;
    cout << OS1 << endl;

    cout << "\nMySet OS2 Contents" << endl;
    cout << "___________" << endl;
    cout << OS2 << endl;

    OS6 = OS1.Union(OS3);
    cout << "\nOS3 and OS6 ";
    if(OS3 == OS6) {
        cout << "ARE EQUAL" << endl;
    }
    else {
        cout << "ARE NOT EQUAL" << endl;
    }
    cout << "OS1 and OS6 ";
    if(OS1 == OS6) {
        cout << "ARE EQUAL" << endl;
    }
    else {
        cout << "ARE NOT EQUAL" << endl;
    }

    cout << "Please enter a path to a third input file:";
    cin >> path7;

    ifstream inputFile7(path7);

    if (!inputFile7.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile7 >> number) {
        if(OS1.addelt(number)) {
            cout << number << " was successfully added to OS1" << endl;
        }
        else {
            cout << number << " ALREADY PRESENT IN OS1" << endl;
        }

    }

    inputFile7.close();

    cout << "\nOS1 AFTER ADDITION of elements" << endl;
    cout << "OrderedSet OS1 Contents" << endl;
    cout << "___________" << endl;
    cout << OS1 << endl;

    cout << "\nPlease enter a path to a fourth input file:";
    cin >> path8;

    ifstream inputFile8(path8);

    if (!inputFile8.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile8 >> number) {
        if(OS1.deleteelt(number)) {
            cout << number << " was successfully deleted from OS1" << endl;
        }
        else {
            cout << number << " NOT FOUND" << endl;
        }
    }

    inputFile8.close();

    cout << "\nOS1 AFTER DELETION of elements" << endl;
    cout << "OrderedSet OS1 Contents" << endl;
    cout << "___________" << endl;
    cout << OS1 << endl;

    cout << "\nPROGRAM COMPLETE" << endl;


    return 0;
}

ostream & operator<<(ostream & os, mySet & x) {

    if(!x.isempty()) {
        string S ="{ ";
        for(int i = x.size-1; i >= 0; i--) {
            S+= to_string(x.getelts().at(i));
            if(i != 0 && i != x.size - 10) {
                S+= " ,";
            }
            if(i == x.size - 10 && i != 0) {
                S+= " ,\n";
            }
        }
        S+=" }";
        os << S;
        return os;
    }
    else {
        return os << "Set is EMPTY";
    }
}

ostream & operator<<(ostream & ost, const OrderedSet & OS) {

    if(!OS.size == 0) {
        string S ="{ ";
        for(int i = 0; i < OS.size; i++) {
            S+= to_string(OS.elts.at(i));
            if(i != OS.size - 1 && i != 9) {
                S+= " ,";
            }
            if(i == 9 && i != OS.size -1) {
                S+= ",\n";
            }
        }
        S+=" }";
        ost << S;
        return ost;
    }
    else {
        return ost << "OrderedSet is EMPTY";
    }

}