// Problem: Bank Account

// Class BankAccount:
// - Attributes: accountNumber, balance

// Parameterized constructor

// Copy constructor

// Function displayAccount()

// Copy one account into another and check values.


#include <iostream>
#include <string> 
using namespace std;

class BankAccount{

private: 
    string accountNumber;
    double balance;

public: 
    BankAccount(string accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    BankAccount (const BankAccount &acc) {
        accountNumber = acc.accountNumber;
        balance = acc.balance;
    }

    void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1 ("22113344", 30000);
    BankAccount acc2 = acc1;

    acc1.displayAccount();
    cout << endl;
    acc2.displayAccount();

    return 0;
}