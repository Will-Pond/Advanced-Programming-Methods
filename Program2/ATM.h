#pragma once
#include "Bank.h"


class ATM {
    public:
        ATM(Bank &Bank);
        int start();
        void transactions(Account &);
    protected:
        Bank bank;

};

