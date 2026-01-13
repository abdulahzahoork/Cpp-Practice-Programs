// Problem 1: Student Record

// Create a class Student that has:

// Private data members:
// - name
// - rollNo
// - marks

// Public member functions:
// - inputData() → take input from user
// - displayData() → display student information
// - isPassed() → display "Passed" if marks ≥ 50, else "Failed"

// Create two objects in main().

// =====================================================================================================

#include <iostream>
using namespace std;

class Student {

private: 
    string name, rollNo;
    int marks;

public: 
    void inputData() {

        string n, r;
        int m;

        cout << "Enter name: ";
        getline(cin, n);

        cout << "Enter roll no: ";
        getline(cin, r);

        do {
            cout << "Enter marks: ";
            cin >> m;
            cin.ignore();

            if (m < 0 || m > 100) {
                cout << "Invalid marks! Please enter again." << endl;
            }
        } while (m < 0 || m > 100);

        name = n;
        rollNo = r; 
        marks = m;
    }
    
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }


    void isPassed () {
        if (marks >= 50) {
            cout << "Status: Passed" << endl;
        } else {
            cout << "Status: Failed" << endl;
        }
    }
};


int main() {
    Student s1, s2;

    s1.inputData();
    cout << endl;
    s2.inputData();

    cout << endl;
    s1.displayData();
    s1.isPassed();
    
    cout << endl;
    s2.displayData();
    s2.isPassed();

    return 0;
}