// Base class Account:
// - accountNumber
// - balance

// Derived class SavingsAccount:
// - function addInterest() (increase balance by 10%)

// Task: Show balance before and after interest.

#include <iostream>
#include <string>
using namespace std;

// -------------------- Base Class -------------------- 
class Account {

private: 
    string accountNumber;
    double balance;

public: 
    Account (string accNo, double bal): accountNumber(accNo), balance((bal<0)? 0 : bal) {}

    void setBalance(double amount) {
        balance = (amount<0)? 0 : amount;
    }

    double getBalance() const {
        return balance;
    }
};

// -------------------- Derived Class --------------------
class SavingsAccount : public Account {

public: 
    SavingsAccount(string accNo, double bal): Account(accNo, bal) {}

    void addInterest() {
        setBalance(getBalance() * 1.10);
    }
};

// -------------------- Main Function --------------------
int main() {
    string accNo;
    double bal;

    cout << "Enter Account no: ";
    getline (cin, accNo);
    cout << "Enter balance: ";
    cin >> bal;

    SavingsAccount sAcc (accNo, bal);
    cout << "Balance before interest: " << sAcc.getBalance() << endl;
    sAcc.addInterest();
    cout << "Balance after interest: " << sAcc.getBalance() << endl;
}