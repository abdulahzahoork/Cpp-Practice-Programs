// Problem: Student Result Management System

// Requirements:
// Create a base class Person

// Data members:
// - string name
// - int age

// Function:
// Constructor to input person
// void displayPerson()

// Create a derived class Student (publicly inherited from Person)

// Data members:
// - int rollNo
// - int marks[3]

// Functions:
// constructor to input student
// void calculateTotal()
// void calculateAverage()
// void displayResult()

// Program Task:

// Take input from user:
// - Name
// - Age
// - Roll Number
// - Marks of 3 subjects (using array)

// Calculate:
// - Total marks
// - Average marks

// Display complete student result.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// --------------- Base Class (Person) ---------------

class Person {

private: 
    string name;
    int age;

public: 
    Person (string n, int a) : name(n), age((a<0)? 0 : a) {}

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// --------------- Derived Class (Student) ---------------

class Student : public Person {

private: 
    int rollNo;
    int marks[3];

public: 
    Student (string n, int a, int roll, int m[3]) : Person(n, a), rollNo(roll) {
        for (int i=0; i<3; i++) {
            marks[i] = m[i];
        }
    }

    void calculateTotal() {
        int sum = 0;
        for (int i=0; i<3; i++) {
            sum += marks[i];
        }
        cout << "Total Marks = " << sum << endl;
    }

    void calculateAverage() {
        int sum = 0; 
        for (int i=0; i<3; i++) {
            sum += marks[i];
        }
        cout << "Average Marks = " << (float)sum/3 << endl;
    }

    void displayResult() {
        displayPerson();
        cout << "Roll no: " << rollNo << endl;
        for (int i=0; i<3; i++) {
            cout << "Marks in subject no. " << i+1 << ": " << marks[i] << endl; 
        }
        calculateTotal();
        calculateAverage();
    }
};

// --------------- Main Function ---------------

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    string name;
    int age;
    int rollNo;
    int marks[3];

    vector<Student> students;
    students.reserve(n);

    for (int i=0; i<n; i++) {
        cout << "\nEnter details of Student no. " << i+1 << endl;
        cout << "Enter name: ";
        getline (cin, name);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter roll no: ";
        cin >> rollNo;

        for (int i=0; i<3; i++) {
            cout << "Enter marks of subject " << i+1 << ": ";
            cin >> marks[i];
        }
        cin.ignore();

        students.emplace_back(name, age, rollNo, marks);
    }

    cout << "--------------- Students Results ---------------" << endl;

    for (int i=0; i<students.size(); i++) {
        students[i].displayResult();
        cout << endl;
    }

    return 0;
}