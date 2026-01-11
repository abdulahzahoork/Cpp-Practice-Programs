// Problem 1: Student Management System

// Create a structure named Student that stores:
// - Roll number
// - Name
// - Marks in three subjects

// Inside the structure:
// - Create a member function to input student data
// - Create a member function to display student data

// Outside the structure:
// - Write a normal function to calculate and return average marks
// - Write another normal function to check Pass/Fail (pass if average ≥ 50)

// In main():
// - Declare a student variable
// - Take input, display details, show average and pass/fail status

#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    int marks[3];
    string name;

    void getDetails () {
        cout << "Enter Roll no: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);

        for (int i=0; i<3; i++) {
            cout << "Enter marks in Subject " << i+1 << ": ";
            cin >> marks[i];    
        }
    }

    void showData () {
        cout << "Roll no: " << rollNo << endl;
        cout << "Name: " << name << endl;
        for (int i=0; i<3; i++) {
            cout << "Marks in Subject " << i+1 << ": " << marks[i] << endl;
        }
    }
};

double calculateAverageMarks (int* marks, int size) {
    int sum = 0;

    for (int i=0; i<size; i++) {
        sum += marks[i];
    }

    return (double)sum/size;
}

bool checkPass (double average) {
    return average >= 50;
}

int main() {

    Student s[3];

    for (int i=0; i<3; i++) {
        s[i].getDetails();
        cout << endl;
    }

    cout << "---------- Student Details ----------" << endl;
    cout << endl;
    
    for (int i=0; i<3; i++) {
        s[i].showData();

        double average = calculateAverageMarks(s[i].marks, 3);
        cout << "Average Marks: " << average << endl;

        if (checkPass(average)) {
            cout << "Status: Pass" << endl;
        } else {
            cout << "Status: Fail" << endl;
        }

        cout << endl;
    }

    return 0;
}