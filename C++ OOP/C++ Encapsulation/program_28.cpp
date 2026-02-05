// Problem: Bank Account

// Class BankAccount:
// - string accountNo
// - double balance

// Functions:
// BankAccount& setAccount(string no)
// BankAccount& deposit(double amt)
// BankAccount& withdraw(double amt)
// display()

// Example:
// BankAccount b(101, 1000);
// b.deposit(500).withdraw(200).display();

#include <iostream>
using namespace std;

class BankAccount {

private: 
    string accountNo;
    double balance;

public: 
    BankAccount(string accNo, double bal): accountNo(accNo), balance((bal<0)? 0 : bal) {}

    double getBalance() const {
        return balance;
    }

    BankAccount& setAccount(string accNo) {
        accountNo = accNo;
        return *this;
    }

    BankAccount& deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        } else {
            cout << "Amount cannot be zero or negative." << endl;
        }

        return *this;
    }

    BankAccount& withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }

        return *this;
    }

    void display() const {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b("100101", 30000);

    b.setAccount("PUPYG9YYC");

    cout << "Balance: " << b.getBalance() << endl;

    b.deposit(8000).withdraw(20000).display();

    return 0;
}