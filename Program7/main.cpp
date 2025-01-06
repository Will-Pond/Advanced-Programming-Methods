#include <condition_variable>
#include <future>
#include <iostream>
#include <mutex>
#include <vector>
#include <cstdlib>

using namespace std;

mutex mtx;
bool allReady = false;
condition_variable cv;

void doStuff(promise<int> prms, int id);
void runSimulation();


int main() {

    int N;

    cout << "Enter a non-negative integer:";
    cin >> N;

    vector<thread> V;
    for (int i = 0; i < N; i++) {
        promise<int> P;
        future<int> F;
        V.push_back(thread(doStuff,move(P),i));
    }

    cout << "READY TO RELEASE THE THREADS" << endl;

    runSimulation();

    for(int i = 0; i < N; i++) {
        V[i].join();
    }

    cout << "Program Execution complete" << endl;

    return 0;
}

void doStuff(promise<int> prms, int id) {

    cout << "Thread " << id << " is now active" << endl;

    srand(time(0) + id);

    unique_lock<mutex> UL(mtx);
    while(allReady == false) {
        cout << "Thread " << id << " is waiting" << endl;
        cv.wait(UL);

        int randTime1 = rand() % 901 + 100;
        cout << "Thread " << id << " is preparing to sleep for " << randTime1 << " milliseconds" << endl;
        this_thread::sleep_for(chrono::milliseconds(randTime1));

        int randTime2 = rand() % 100 + 1;
        cout << "Thread " << id << " is returning value " << randTime2 << endl;
        prms.set_value(randTime2);

    }

}

void runSimulation() {
    unique_lock<mutex> UL(mtx);
    allReady = true;
    cv.notify_all();
}


