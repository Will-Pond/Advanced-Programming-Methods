#pragma once

#include "Account.h"

#include <vector>
#include <iomanip>
#include <string>

using namespace std;

class Bank{

    public:
        Account & findAcct(string, string);
        void addAcct(Account &);
        void loadAccounts(ifstream &);

    protected:
        vector<Account> allAccounts;
        Account dummyAccount;
};




