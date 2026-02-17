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
#include <string>
#include <vector>
using namespace std;

// ----------------- Base Class (Person) -----------------
class Person {

private: 
    string name;
    int age;

public: 
    Person (string n, int a): name(n), age((a<0)? 0 : a) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// ----------------- Derived Class (Student) -----------------
class Student : public Person {

private: 
    int rollNo;

public: 
    Student(string n, int a, int r): Person(n, a), rollNo(r) {}

    void displayStudent() const {
        display();
        cout << "Roll no: " << rollNo << endl;
    }
};

// ----------------- Main Function -----------------
int main() {

    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    string name;
    int age, rollNo;

    vector<Student> students;
    students.reserve(n);

    for (int i=0; i<n; i++) {
        cout << "\nEnter details of Student no. " << i+1 << ": " << endl;

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter roll no: ";
        cin >> rollNo;
        cin.ignore();

        students.emplace_back(name, age, rollNo);
    }

    cout << "\n------------------ Students Details ------------------" << endl;
    for (int i=0; i<n; i++) {
        cout << "\nStudent no. " << i+1 << endl;
        students[i].displayStudent();
    }

    return 0;
}