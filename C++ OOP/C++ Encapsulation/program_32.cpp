// Problem: Pass Object by Reference (Use Problem of program_31.cpp)

// Same Student class, but now use:
// - void updateRoll(Student &s, int newRoll);

// Modify roll number inside function
// Show that original object changes.

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

    void setRoll(int roll) {
        rollNo = roll;
    }
};

void updateRoll(Student &s, int newRoll) {
    s.setRoll(newRoll);
}

int main() {
    Student s1("Abdullah", 27);
    s1.display();
    updateRoll(s1, 16);
    s1.display();
    return 0;
}