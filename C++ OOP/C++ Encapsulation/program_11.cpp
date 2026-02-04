// Problem: Student Class

// Create class Student with:
// - Attributes: name, rollNo

// Parameterized constructor

// Copy constructor

// Function display()

// In main():
// - Student s1("Abdullah", 101);
// - Student s2 = s1;  (copy constructor should be called)

// Display both objects.

#include <iostream>
#include <string>
using namespace std;

class Student {

private: 
    string name;
    int rollNo;

public: 
    Student (string n, int r) {
        name = n;
        rollNo = r;
    }

    Student (const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        cout << "Copy constructor called" << endl;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};

int main() {
    Student s1 ("Abdullah", 27);
    Student s2 = s1;

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}