#pragma once

#include <iomanip>
#include <string>

using namespace std;

class Account {

    public:
        Account();
        Account(string, string, double);
        void setID(const char *);
        void setPIN(const char *);
        void setBalance(double);
        string getID();
        string getPIN();
        double getBalance();
        void printBalance();
        void Deposit(double);
        void Withdraw(double);
    protected:
        string accountID;
        string accountPIN;
        double accountBalance;

};



