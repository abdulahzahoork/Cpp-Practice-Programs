// Using the same structure as in the previous program:
// Input data for n students
// Display the student with highest CGPA

#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float cgpa;
};

int main() {
    Student st[5];

    for (int i=0; i<5; i++) {
        cout << "Details of Student " << i+1 << endl;
        cout << "Enter Roll no: ";
        cin >> st[i].rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, st[i].name);

        cout << "Enter CGPA: ";
        cin >> st[i].cgpa;
        cout << endl;
    }

    int highestCGPA = 0;
    for (int i=1; i<5; i++) {
        if (st[i].cgpa > st[highestCGPA].cgpa) {
            highestCGPA = i;
        }
    }

    cout << "Student with highest CGPA: " << st[highestCGPA].name << endl;
    return 0;
}