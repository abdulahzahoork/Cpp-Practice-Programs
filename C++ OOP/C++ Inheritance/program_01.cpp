// Problem: Create a base class Person with:

// Data members:
// - name
// - age

// Function: displayPerson()
// Create a derived class Student that inherits from Person and adds:
// Data member: rollNo
// Function: displayStudent()

// Task:
// Create an object of Student and display all details.

#include <iostream>
using namespace std;

class Person {

private: 
    string name;
    int age;

public: 
    Person(string n, int a): name(n), age(a) {}

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {

private: 
    int rollNo;

public: 
    Student (string n, int a, int r): Person(n, a), rollNo(r) {}

    void displayStudent() const {
        displayPerson();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1 ("Abdullah", 22, 27);
    s1.displayStudent();

    return 0;
}