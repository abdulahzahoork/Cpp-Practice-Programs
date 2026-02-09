#include <iostream>
#include <string>
using namespace std;

class BankAccount {

private: 
    string accountHolder;
    int accountNumber;
    double balance;
    static double minimumBalance;

public: 

// Requirement: Create a parameterized constructor that:
// - Accepts accountHolder, accountNumber, and initialBalance.
// - Uses the this pointer to differentiate between data members and parameters.
// - If initialBalance is less than minimumBalance, set balance equal to minimumBalance.

    BankAccount (string accountHolder, int accountNumber, double initialBalance) {
        this->accountHolder = accountHolder;
        this->accountNumber = accountNumber;
        this->balance = (initialBalance < minimumBalance)? minimumBalance : initialBalance;
    }

// Requirement: Create a Destructor that prints "BankAccount object destroyed for: <accountHolder>"

    ~BankAccount() {
        cout << "BankAccount object destroyed for: " << accountHolder << endl; 
    }

// Requirement: Create getter functions for:
// - getAccountHolder()
// - getAccountNumber()
// - getBalance()
// - getMinimumBalance() → static function

    string getAccountHolder() const {
        return accountHolder;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    static double getMinimumBalance() {
        return minimumBalance;
    }

// Requirement: Create setter functions for:
// - setAccountHolder(string name)
// - setBalance(double amount)
// Rules:
// - Balance must not be less than minimumBalance.
// - Use this pointer inside setters.

    void setAccountHolder (string name) {
        this->accountHolder = name;
    }

    void setBalance (double amount) {
        if (amount < minimumBalance) {
            cout << "Amount must not be less than minimum balance." << endl;
        } else {
            this->balance = amount;
        }
    }

// Requirement: Static Data Member & Static Function
// - Define minimumBalance = 1000 outside the class using scope resolution operator ::
// - Create a static function to update minimum balance: static void setMinimumBalance(double amount);

    static void setMinimumBalance (double amount) {
        minimumBalance = amount;
    }

// Requirement: Cascaded Function Call
// Create a function: BankAccount& deposit(double amount);
// It should add money to balance.
// Return *this so multiple calls can be chained like:
// acc.deposit(500).deposit(300).deposit(200);

    BankAccount& deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Amount cannot be zero or negative!" << endl;
        }
        return *this;
    }

// Requirement: Returning Object from Function
// Create a function inside class: BankAccount addInterest(double rate);
// It should: create a new BankAccount object
// Add interest: newBalance = balance + (balance * rate / 100);
// Return the new object.

    BankAccount addInterest (double rate) {
        double newBalance = balance + (balance * rate / 100);
        BankAccount temp (accountHolder, accountNumber, newBalance);
        return temp;
    }
};

double BankAccount :: minimumBalance = 1000;

// Requirement: Passing Object to Function
// Create an external function: void printAccountDetails(BankAccount acc);
// This function should receive object by value and print:
// - Account Holder
// - Account Number
// - Balance

void printAccountDetails(BankAccount acc) {
    cout << "Account Holder: " << acc.getAccountHolder() << endl;
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance: " << acc.getBalance() << endl;
}

int main() {

    // create 2 objects
    BankAccount acc1("Muhammad Abdullah Khan", 101, 30000);
    BankAccount acc2("Muhammad Mursal", 102, 45000);

    // call cascaded function
    acc1.deposit(5000).deposit(2000);

    // change minimum balance
    BankAccount :: setMinimumBalance(20000);

    // pass object to function
    printAccountDetails(acc1);
    cout << endl;

    // return object from function
    BankAccount acc3 =  acc1.addInterest(10);
    printAccountDetails(acc3);

    return 0;
}