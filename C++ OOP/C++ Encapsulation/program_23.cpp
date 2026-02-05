// Problem: Student Management

// Create class Student with:
// Private data members:
// - string name
// - int rollNo

// Requirements:
// Parameterized constructor
// Getters: getName(), getRollNo()
// Setters: setName(), setRollNo()
// Use this pointer inside setters

// Destructor that prints:
// Student object destroyed

#include <iostream>
#include <string>
using namespace std;

class Student {

private: 
    string name;
    int rollNo;

public: 
    Student (string name, int rollNo) {
        this->name = name;
        this->rollNo = rollNo;
    }

    ~Student () {
        cout << "Student Object Destroyed" << endl;
    }

    string getName() const {
        return name;
    }

    int getRollNo() const {
        return rollNo;
    }

    void setName(string name) {
        this->name = name;
    }

    void setRollNo(int rollNo) {
        if (rollNo<0) {
            this->rollNo = 0; 
        } else {
            this->rollNo = rollNo;
        }
    }
};

int main() {
    Student s("Unknown", 0);
    s.setName("Abdullah");
    s.setRollNo(27);

    cout << "Name: " << s.getName() << endl;
    cout << "Roll no: " << s.getRollNo() << endl;

    return 0;
}