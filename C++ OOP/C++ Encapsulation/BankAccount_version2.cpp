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
    double balance;

public: 
    BankAccount (string accNo, double bal): accountNumber(accNo), balance((bal<0)? 0 : bal) {}

    double getBalance() const {
        return balance;
    }

    void deposit (double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        } else {
            cout << "Invalid input! Try again." << endl;
        }
    }

    void withdraw (double amount) {
        if (amount <= 0) {
            cout << "Invalid amount! Try again" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }
};

int main() {
    BankAccount account ("PUPYG9YYC", 450000);
    int choice;

    do {
        cout << endl;
        cout << "1. Check Balance \n2. Deposit \n3. Withdraw \n4. Exit \nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << account.getBalance() << endl;
                break;
            case 2: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 3: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 4:
                cout << "Thank you for choosing us!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}