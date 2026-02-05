// Problem: Bank Account

// Create a class BankAccount with:
// - Attributes: accountNumber, balance

// A default constructor that:
// - Sets account number to 0000
// - Sets balance to 0

// Function displayAccount()

// Observe what happens when no values are passed

#include <iostream>
#include <string>
using namespace std;

class BankAccount {

private:
    string accountNumber;
    double balance;

public:
    BankAccount() {
        accountNumber = "0000";
        balance = 0;
    }

    void displayAccount() const {
        cout << "Account Number: " << accountNumber << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.displayAccount();

    return 0;
}