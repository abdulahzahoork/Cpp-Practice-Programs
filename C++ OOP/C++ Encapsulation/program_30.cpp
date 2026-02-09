// Problem: Student ID Generator

// Class Student:
// - string name
// - int rollNo
// - static int nextRoll;

// Requirements:
// Constructor assigns rollNo = nextRoll++
// Function display()
// Static function resetRoll() to reset nextRoll = 1
// Use Student::nextRoll outside the class.


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    static int nextRoll;

public:
    Student(string n) {
        name = n;
        rollNo = nextRoll++;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    static void resetRoll() {
        nextRoll = 1;
    }
};

int Student::nextRoll = 1;

int main() {

    Student s1("Ali");
    Student s2("Abdullah");
    Student s3("Ahsan");

    s1.display();
    s2.display();
    s3.display();

    cout << "\nResetting roll numbers...\n";
    Student::resetRoll();

    Student s4("Hamza");
    s4.display();

    return 0;
}