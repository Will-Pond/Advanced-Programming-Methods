#include "Account.h"
#include "Bank.h"
#include "ATM.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

ATM::ATM(Bank &Bank1) {
    bank = Bank1;
}

int ATM::start() {
    string choice;
    string id;
    string pin;
    int i = 0;

    cout<<"Please enter your command"<<endl;
    cout<<"Q-quit/exit"<<endl;
    cout<<"L-login to account"<<endl;
    cin>>choice;

    if(choice == "L") {

        while(i < 3) {
            cout<<"Please enter Account ID"<<endl;
            cin>>id;
            cout<<"Please enter PIN"<<endl;
            cin>>pin;

            Account &acc = bank.findAcct(id,pin);
            if(acc.getID() != id && acc.getPIN() != pin ) {
                cout<<"Sorry-no match\n"<<endl;
                i++;
                if(i == 3) {
                    return 1;
                }

            }

            else if(acc.getID() == id  && acc.getPIN() == pin) {
                cout<<"Account Found\n"<<endl;
                transactions(acc);
                return start();
            }

        }
    }
    else if(choice == "Q") {
        return 0;
    }
    else {
        cout<<"Try again"<<endl;
    }

}

void ATM::transactions(Account & account) {

        string option;
        double input;

        cout << "Please enter your selection or Q to quit.\n" << endl;
        cout << "W -withdraw funds" << endl;
        cout << "D -deposit funds" << endl;
        cout << "B -check balance" << endl;
        cout << "Q -quit/exit" << endl;
        cin >> option;

        if (option == "W") {
            cout << "\nPlease enter amount of withdrawal" << endl;
            cin >> input;
            account.Withdraw(input);
            transactions(account);
        }

        else if (option == "D") {
            cout << "\nPlease enter amount of deposit." << endl;
            cin >> input;
            account.Deposit(input);
            transactions(account);
        }

        else if (option == "B") {
            account.printBalance();
            transactions(account);

        }

        else if (option == "Q") {
            cout << "Goodbye.\n" << endl;

        }

        else {
            cout << "\nUnrecognized command "<< option <<"\n"<< endl;
            transactions(account);
        }

    }










