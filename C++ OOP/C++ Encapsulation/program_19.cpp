// Problem: Simple Student Class

// Task:
// Create a class Student using initializer list.

// Attributes:
// - string name
// - int rollNo

// Requirements:
// Parameterized constructor using initializer list
// Function display()

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {

private: 
    string name;
    int rollNo;

public: 
    Student (string n, int r): name(n), rollNo(r) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    vector<Student> students;
    students.reserve(n);

    string name;
    int rollNo;

    for (int i=0; i<students.size(); i++) {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll no: ";
        cin >> rollNo;
        cin.ignore();

        students.emplace_back(name, rollNo);
        cout << endl;
    }

    cout << "---------- Students Records ----------" << endl;
    cout << endl;
    for (int i=0; i<students.size(); i++) {
        cout << "Student no. " << i+1 << endl;
        students[i].display();
        cout << endl;
    }

    return 0;
}