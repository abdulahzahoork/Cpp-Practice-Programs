// Problem 1: Student Record

// Create a structure Student with the following data members:

// - rollNo
// - name
// - marks

// Tasks:
// Input data of 5 students
// Display all student records
// Display the student who has maximum marks


#include <iostream>
using namespace std;

struct Student {
    int rollNo, marks;
    string name;

    void getDetails() {
        cout << "Enter your Roll no: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your marks: ";
        cin >> marks;
    }

    void showDetails() {
        cout << "Roll no: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s[5];

    // Input Data
    for (int i=0; i<5; i++) {
        cout << "Enter Details of student no. " << i+1 << ": " << endl;
        s[i].getDetails();
        cout << endl;
    }

    cout << "---------- Student's  Record ----------" << endl;
    cout << endl;
    
    // Output Data
    for (int i=0; i<5; i++) {
        s[i].showDetails();
        cout << endl;
    }

    // Student with maximum marks
    int max = 0;
    for (int i=1; i<5; i++) {
        if (s[max].marks < s[i].marks) {
            max = i;
        }
    }
    cout << "Student with maximum marks: " << endl;
    cout << "Roll no: " << s[max].rollNo << endl;
    cout << "Name: " << s[max].name << endl;
    cout << "Marks: " << s[max].marks << endl;

    return 0;
}