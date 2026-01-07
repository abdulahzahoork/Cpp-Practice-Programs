// Create a structure Student with:
// - rollNo
// - name
// - cgpa
// Store data for 5 students using an array of structures and display all records.

#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float cgpa;
};

int main() {
    Student st[5];
    // Input Data
    for (int i=0; i<5; i++) {
        cout << "Enter details of student no. " << i+1 << endl;
        cout << "Enter Roll no: ";
        cin >> st[i].rollNo;
        cin.ignore();
        cout << "Enter name: ";
        getline (cin, st[i].name);
        cout << "Enter CGPA: ";
        cin >> st[i].cgpa;
        cout << endl;
    }

    // OutPut Data
    cout << "---------- Students Data ----------" << endl;
    for (int i=0; i<5; i++) {
        cout << "Student " << i+1 << endl;
        cout << "Roll No: " << st[i].rollNo << endl;
        cout << "Name: " << st[i].name << endl;
        cout << "CGPA: " << st[i].cgpa << endl;
        cout << endl;
    }

    return 0;
}