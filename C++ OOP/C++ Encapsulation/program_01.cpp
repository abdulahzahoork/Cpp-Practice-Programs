// Problem: Student Class

// Create a class Student with:
// - Attributes: name, rollNo

// A default constructor that assigns:
// - name = "Unknown"
// - rollNo = 0

// A function display() to show data

// Create an object in main() and display its values.

#include <iostream>
using namespace std;

class Student {

private:
    string name;
    int rollNo;

public:
    // ------ Default Constructor ------
    Student() {
        name = "Unknown";
        rollNo = 0;
    }

    void display() const {
        cout << "Name: " << name << "\nRoll no: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}