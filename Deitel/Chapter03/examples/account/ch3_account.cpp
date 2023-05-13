#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account account{"a1", 30};
    cout << "Please enter an account name: ";

    string name;
    getline(cin, name);

    account.setName(name);
    cout << "The account name is:\n" << account.getName() << endl;
    cout << "Balance: " << account.getBalance() << endl;

    Account account2{"Mr Green", -3};
    int dep = 0;
    cout << "Enter deposit amount: ";
    cin >> dep;
    account2.deposit(dep);
    cout << "The account name is:\n" << account2.getName() << endl;
    cout << "Balance: " << account2.getBalance() << endl;

    account.displayAccount();
    account2.displayAccount();

    account.withdraw(2);
    account.displayAccount();
    account.withdraw(90000);
    account.displayAccount();

    return 0;
}

