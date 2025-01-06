#include "Account.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

Account::Account() {

    setID("");
    setPIN("");
    setBalance(0.0);

}

 Account::Account(string accountID, string accountPIN, double accountBalance) {
    for(char character : accountPIN) {
        if(!isdigit(character))
        {
            cout<<"Invalid Account ID or Account PIN or Invalid Account Balance"<<endl;
            exit(25);
        }
    }
        if(accountID.length() != 8 || accountPIN.length() != 4 || accountBalance < 0.0)
        {
            cout<<"Invalid Account ID or Account PIN or Invalid Account Balance"<<endl;
            exit(25);
        }
 }

void Account::setID(const char * str) {
    accountID = string(str);
}
void Account::setPIN(const char * str) {
    accountPIN = string(str);
}

void Account::setBalance(double amt) {
    accountBalance = amt;

}
string Account::getID() {
    return accountID;
}

string Account::getPIN() {
    return accountPIN;
}

double Account::getBalance() {
    return accountBalance;
}

void Account::printBalance() {
    cout << "\nBalance: $"  << fixed << setprecision(2) << setfill('0') << getBalance() << "\n" << endl;
}

void Account::Deposit(double amt) {
    if (amt >= 0.0)
    {
        accountBalance += amt;
        setBalance(accountBalance);
    }
    else
    {
        cout << "Error invalid amount" << endl;
    }
}

void Account::Withdraw(double amt) {
    {
        if(amt > 0.0 && amt <= accountBalance)
        {
            accountBalance -= amt;
            setBalance(accountBalance);

        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
}
















