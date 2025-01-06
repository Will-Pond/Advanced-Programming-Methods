#include "Bank.h"
#include "Account.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

Account &Bank::findAcct(string id, string pin) {
    for(int i = 0; i < allAccounts.size(); i++) {
        if(allAccounts[i].getID() == id && allAccounts[i].getPIN() == pin) {
            return allAccounts[i];
        }
    }
    return dummyAccount;
}

void Bank::addAcct(Account & acct) {
    allAccounts.push_back(acct);
}

void Bank::loadAccounts(ifstream & inf) {
    string id;
    string pin;
    double balance = 0.0;
    int count = 0;

    while (inf >> id >> pin >> balance) {

        Account  row(id, pin, balance);
        row.setID(id.c_str());
        row.setPIN(pin.c_str());
        row.setBalance(balance);
        addAcct(row);
        count++;

    }

    cout<<"Loading Data.."<<endl;
    cout<<count<<" Accounts loaded\n"<<endl;

}



