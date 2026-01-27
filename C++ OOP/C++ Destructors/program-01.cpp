// Program 1: Destructor Message
// Objective: Understand when a destructor is called.

// Task:
// - Create a class Student
// - Data members: name, rollNo
// - Constructor should print: "Constructor called"
// - Destructor should print: "Destructor called"

// Hint:
// - Create an object inside main() and observe the output when the program ends.

#include <iostream>
#include <vector>
using namespace std;

class Student {

private: 
    string name;
    int rollNo;

public:
    Student (string n, int r): name(n), rollNo((r<1 || r>50)? 0 : r) {
        cout << "Constructor called for Roll no: " << rollNo << endl;
    }

    ~Student() {
        cout << "Destructor called for Roll no: " << rollNo << endl;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};

int main() {
    string name;
    int rollNo;
    int n;

    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    vector <Student> students;
    students.reserve(n);

    for (int i=0; i<n; i++) {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter Roll no: ";
        cin >> rollNo;
        cin.ignore();

        students.emplace_back(name, rollNo);
        cout << endl;
    }

    cout << "---------- Students' Details ----------" << endl;
    cout << endl;

    for (int i=0; i<n; i++) {
        cout << "Student no. " << i+1 << endl;
        students[i].showDetails();
        cout << endl;
    }

    return 0;
}