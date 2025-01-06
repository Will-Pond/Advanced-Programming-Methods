#include "myQueue.h"
#include "myQueue.cpp"

#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;


int main(){

    myQueue<int> intQueue;
    myQueue<string> stringQueue;
    myQueue<double> doubleQueue;
    string path;
    string number;
    int intline;
    string  stringline;
    double doubleline;
    int result1;
    string result2;
    double result3;

    cout << "Please enter a path for file:";
    cin >> path;

    ifstream inf(path);

    if (!inf.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    inf >> number;
   for(int i = 0; i < stoi(number); i++) {
       inf >> intline;
       intQueue.enqueue(intline);
    }

    inf >> number;
    for(int i = 0; i < stoi(number); i++) {
        inf >> stringline;
        stringQueue.enqueue(stringline);
    }

    inf >> number;
    for(int i = 0; i < stoi(number); i++) {
        inf >> doubleline;
        doubleQueue.enqueue(doubleline);
    }

    inf.close();

    cout << "\nQueued Integers\n" << endl;
     while(!intQueue.isEmpty()) {
         result1 =  intQueue.dequeue();
         cout << result1 << endl;
     }

    cout << "\nQueued Strings\n" << endl;
    while(!stringQueue.isEmpty()) {
        result2 =  stringQueue.dequeue();
        cout << result2 << endl;
    }

    cout << "\nQueued Doubles\n" << endl;
    while(!doubleQueue.isEmpty()) {
        result3 =  doubleQueue.dequeue();
        cout << setprecision(10) << result3 << endl;
    }

    cout << "\nPROGRAM COMPLETE"<< endl;

    return 0;
}
