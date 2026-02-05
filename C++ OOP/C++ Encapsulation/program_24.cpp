// Problem: Bank Account

// Class BankAccount:
// - Data members:
//     - string accountNo
//     - double balance

// Requirements:
// Constructor to initialize both
// Getter for balance
// Setter for balance (use this)
// Function deposit(double amount)

// Destructor prints:
// - BankAccount closed

#include <iostream>
#include <string>
using namespace std;

class BankAccount {

private: 
    string accountNumber;
    double balance;

public: 
    BankAccount (string accNo, double bal): accountNumber(accNo), balance((bal<0)? 0 : bal) {}

    ~BankAccount() {
        cout << "Bank Account Closed!" << endl;
    }

    double getBalance() const {
        return balance;
    }

    void setBalance(double amount) {
        this->balance = (amount<0)? 0 : amount;
    }

    void deposit(double amount) {
        if (amount<=0) {
            cout << "Amount cannot be zero or negative." << endl;
        } else {
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        }
    }
};

int main() {
    BankAccount acc1("0001", 0);
    acc1.setBalance(30000);

    acc1.deposit(8000);
    cout << "Balance: "<< acc1.getBalance() << endl;
    
    return 0;
}