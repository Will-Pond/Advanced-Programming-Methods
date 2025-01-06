#include <atomic>
#include <iostream>
#include <thread>
#include <vector>

using namespace std;

int main() {

    int counter1 = 0;
    atomic<int> counter2 = 0;
    mutex mtx;
    vector<thread> V;
    int oddcount = 0;
    int evencount = 0;

    //Part A

    srand(time(0));

    for (int i = 0; i < 200; i++) {
        int x = rand();

        if(x % 2 == 0) {
            evencount++;
        }
        else {
            oddcount++;
        }

        V.push_back(thread([=,&counter1](int t) {

             if(t % 2 == 0) {
                 counter1++;
             }
             else {
                 counter1--;
             }

         }, x));
    }


    for (auto & j : V) {
        j.join();
    }

    int  total = evencount - oddcount;
    cout <<"PART A. NO Synchronization\n"<< endl;
    cout <<"# of increments is " << evencount << endl;
    cout <<"# of decrements is " << oddcount << endl;
    cout <<"Correct value should be " << total << endl;
    cout <<"Value of counter is " << counter1 << endl << endl;

    //Part B

    V.clear();
    counter1 = 0;
    evencount = 0;
    oddcount = 0;


    for (int i = 0; i < 200; i++) {
        int x = rand();
        if(x % 2 == 0) {
            evencount++;
        }
        else {
            oddcount++;
        }

        V.push_back(thread([=,&counter1,&mtx](int t) {

             mtx.lock();

             if(t % 2 == 0) {
                 counter1++;
             }
             else {
                 counter1--;
             }

            mtx.unlock();

         }, x));
    }

    for (auto & j : V) {
        j.join();
    }

    total = evencount - oddcount;

    cout <<"PART B. Mutex\n"<< endl;
    cout <<"# of increments is " << evencount << endl;
    cout <<"# of decrements is " << oddcount << endl;
    cout <<"Correct value should be " << total << endl;
    cout <<"Value of counter is " << counter1 << endl << endl;

    //part C

    V.clear();
    counter1 = 0;
    evencount = 0;
    oddcount = 0;

    for (int i = 0; i < 200; i++) {
        int x = rand();

        if(x % 2 == 0) {
            evencount++;
        }
        else {
            oddcount++;
        }

        V.push_back(thread([=,&counter2](int t) {

             if(t % 2 == 0) {
                 counter2++;
             }
             else {
                 counter2--;
             }

         }, x));
    }


    for (auto & j : V) {
        j.join();
    }

    total = evencount - oddcount;
    cout <<"PART C. atomic<int>\n"<< endl;
    cout <<"# of increments is " << evencount << endl;
    cout <<"# of decrements is " << oddcount << endl;
    cout <<"Correct value should be " << total << endl;
    cout <<"Value of counter is " << counter2 << endl << endl;


    return 0;
}
