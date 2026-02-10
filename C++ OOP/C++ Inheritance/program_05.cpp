// Problem: Create a base class Person with:
// - name
// - age

// function displayPerson()
// Create a derived class Student that adds:
// - rollNo

// function displayStudent()
// Task: Create an object of Student and display all data.

#include <iostream>
using namespace std;

// -------------------- Base Class --------------------
class Person {

private: 
    string name;
    int age;

public: 
    Person(string n, int a): name(n), age((a<0)? 0 : a) {}

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


// -------------------- Derived Class --------------------
class Student : public Person {

private: 
    int rollNo;

public: 
    Student (string n, int a, int r): Person(n, a), rollNo((r<0)? 0 : r) {}

    void displayStudent() const {
        displayPerson();
        cout << "Roll no: " << rollNo << endl;
    }
};

// -------------------- Main Function --------------------
int main() {
    string name;
    int age, rollNo;

    cout << "Enter your name: ";
    getline (cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter Roll no: ";
    cin >> rollNo;

    cout << endl;
    
    Student s(name, age, rollNo);
    s.displayStudent();

    return 0;
}