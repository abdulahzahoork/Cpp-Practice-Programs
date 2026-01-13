// Problem 2: Bank Account

// Create a class BankAccount with:

// Private:
// - accountNumber
// - balance

// Public:
// - setAccount() → input account number & initial balance
// - deposit() → add amount to balance
// - withdraw() → subtract amount (only if sufficient balance)
// - showBalance()

// Perform multiple deposits and withdrawals.

// =====================================================================================================

#include <iostream>
using namespace std;

class BankAccount {
private: 
    string accountNumber;
    long long balance;

public: 
    void setAccount() {
        string acc;
        long long bal;

        cout << "Enter Account Number: ";
        getline(cin, acc);

        do {
            cout << "Enter balance: ";
            cin >> bal;
            cin.ignore();

            if (bal<0) {
                cout << "Invalid input! Balance can't be negative." << endl;
            }
        } while (bal < 0);

        accountNumber = acc;
        balance = bal;
    }

    void deposit() {
        long long amount;

        do {
            cout << "Enter amount to deposit: ";
            cin >> amount;
             
            if (amount <= 0) {
                cout << "Invalid input! Try again." << endl;
            }
        } while (amount < 0);

        balance += amount;
        cout << "Amount deposited successfully!" << endl;
    }

    void withdraw () {
        long long amount;

        do {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance) {
                cout << "Insufficient balance" << endl;
            } else if (amount <= 0) {
                cout << "Invalid amount! Try again" << endl;
            }
        } while (amount > balance || amount <= 0);

        balance -= amount;
        cout << "Amount withdrawn successfully!" << endl;
    }

    void showBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;

    acc.setAccount();

    do {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                acc.deposit();
                cout << endl;
                break;
            case 2: 
                acc.withdraw();
                cout << endl;
                break;
            case 3:
                acc.showBalance();
                cout << endl;
                break;
            case 4: 
                cout << "Have a nice day!" << endl;
                break;
            default: 
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}