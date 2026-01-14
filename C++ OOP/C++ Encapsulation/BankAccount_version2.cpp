// Create a class BankAccount with:

// private: 
//   - accountNumber
//   - balance

// constructor to initialize both
// getBalance() function
// deposit(amount) and withdraw(amount) functions with validation

// Rules:
// Balance should never be negative
// No direct access to balance

// =====================================================================================================

#include <iostream>
using namespace std;

class BankAccount {

private: 
    string accountNumber;
    long long balance;

public: 
    BankAccount (string accNo, long long bal): accountNumber(accNo), balance(bal) {}

    
};