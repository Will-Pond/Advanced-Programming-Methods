#include "myQueue.h"
#include "myStack.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

    Employee result;
    myStack S1;
    myStack S2;
    myStack S3;
    myQueue Q1;
    myQueue Q2;
    myQueue Q3;
    string path1;
    string path2;
    string firstName;
    string lastName;
    string socsecnum;
    string deptNum;
    double wage;

    cout << "Please enter a path for file #1:";
    cin >> path1;

    ifstream inputFile1(path1);

    if (!inputFile1.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile1 >> lastName >> firstName >> socsecnum >> deptNum >> wage) {
        Employee employee1(firstName, lastName, socsecnum, deptNum, wage);
        Employee employee2(firstName, lastName, socsecnum, deptNum, wage);

        S1.Push(employee1);
        Q1.Enqueue(employee2);

    }

    inputFile1.close();

    cout << "Please enter a path for file #2:";
    cin >> path2;

    ifstream inputFile2(path2);

    if (!inputFile2.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(inputFile2 >> lastName >> firstName >> socsecnum >> deptNum >> wage) {
        Employee employee1(firstName, lastName, socsecnum, deptNum, wage);
        Employee employee2(firstName, lastName, socsecnum, deptNum, wage);

        S2.Push(employee1);
        Q2.Enqueue(employee2);

    }

    inputFile2.close();

    cout << "\nSTACK #1" << endl;
    cout << "________" << endl;
    S1.printStack();

    cout << "\nQueue #1" << endl;
    cout << "________" << endl;
    Q1.printQueue();

    cout << "\nSTACK #2" << endl;
    cout << "________" << endl;
    S2.printStack();

    cout << "\nQueue #2" << endl;
    cout << "________" << endl;
    Q2.printQueue();

    cout << "AFTER SORTING ALL VECTORS\n" << endl;
    sort(S1.getElts().begin(), S1.getElts().end(), less<Employee>());
    cout << "STACK #1" << endl;
    cout << "________" << endl;
    S1.printStack();

    sort(Q1.getElts().begin(), Q1.getElts().end(), less<Employee>());
    cout << "\nQueue #1" << endl;
    cout << "________" << endl;
    Q1.printQueue();

    sort(S2.getElts().begin(), S2.getElts().end(), less<Employee>());
    cout << "\nSTACK #2" << endl;
    cout << "________" << endl;
    S2.printStack();

    sort(Q2.getElts().begin(), Q2.getElts().end(), less<Employee>());
    cout << "\nQueue #2" << endl;
    cout << "________" << endl;
    Q2.printQueue();


    cout << "\nAfter overloaded operator +\n"<< endl;

    S3 = S1 + S2;
    cout << "Stack #3" << endl;
    cout << "________" << endl;
    S3.printStack();

    Q3 = Q1 + Q2;
    cout << "\nQueue #3" << endl;
    cout << "________" << endl;
    Q3.printQueue();

    cout << "\nAfter SORTING\n" << endl;
    sort(S3.getElts().begin(), S3.getElts().end(), less<Employee>());
    cout << "Stack #3" << endl;
    cout << "________" << endl;
    S3.printStack();

    sort(Q3.getElts().begin(), Q3.getElts().end(), less<Employee>());
    cout << "\nQueue #3" << endl;
    cout << "________" << endl;
    Q3.printQueue();

    cout << "\nREMOVING ALL ITEMS FROM S2 and Q2\n" << endl;
    cout << "Items POPPED from Stack S2\n" << endl;
    while(!S2.isempty()) {
        result = S2.Pop();
        cout << "POPPING " << result << endl;
    }

    cout << "Items DEQUEUED from Queue Q2\n" << endl;
    while(!Q2.isempty()) {
        result = Q2.Dequeue();
        cout << "DEQUEUEING " << result << endl;
    }

    cout << "\nPROGRAM EXECUTION IS COMPLETE\n" << endl;

    return 0;
}

ostream& operator<<(ostream & out, Employee & E) {

    return out << E.getlastName() << " " << E.getfirstName() << " " << E.getsocsecnum() << " " << E.getdeptNum() << " " << E.getwage() << "\n";
}


