// Problem: Student 

// Create class Student:
// Data members (private):
// - string name
// - int rollNo

// Requirements:
// Parameterized constructor
// Setters return object reference:
// Student& setName(string name)
// Student& setRollNo(int r)
// display() function

// In main():
// Student s("Ali", 101);
// s.setName("Abdullah").setRollNo(202).display();

#include <iostream>
using namespace std;

class Student{

private: 
    string name;
    int rollNo;

public: 
    Student (string n="Unknown", int r=0) {
        name = n;
        rollNo = r;
    }

    Student& setName (string name) {
        this->name = name;
        return *this;
    }

    Student& setRollNo (int r) {
        rollNo = r;
        return *this;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};

int main() {
    Student s("Ali", 101);
    s.setName("Abdullah").setRollNo(27).display();

    return 0;
}