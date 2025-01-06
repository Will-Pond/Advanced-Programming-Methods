#include "Bank.h"
#include "ATM.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    ifstream inf;
    Bank bk;
    string path;

    cout << "Enter path for account information:";
    cin >> path;
    inf.open(path);
    if(!inf) {
        cerr << "Error opening file " << path << endl;
        exit(-1);
    }
   bk.loadAccounts(inf);
    ATM atm(bk);
    int result = atm.start();
    switch (result) {
        case 0:
            cout << "\nNormal Exit." << endl;
        break;
        case 1:
            cout << "Account not found-system shutting down" << endl;
        break;
        default:
            cout << "Error occurred" << endl;
        break;
    }
    inf.close();

    return 0;
}

