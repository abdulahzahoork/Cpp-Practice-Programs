// Problem: Pass Object by Value

// Class: Student
// Data members:
// - string name
// - int rollNo

// Functions:
// constructor
// display()
// function outside class:
// void showStudent(Student s);

// Pass a Student object by value and display it inside the function.

#include <iostream>
using namespace std;

class Student {

private: 
    string name;
    int rollNo;

public: 
    Student(string n, int r): name(n), rollNo(r) {}

    void display() const {
        cout << "Name: " << name << "\nRoll no: " << rollNo << endl;
    }
};

void showStudent (Student s) {
    s.display();
}

int main() {
    Student s1("Abdullah", 27);
    showStudent(s1);

    return 0;
}