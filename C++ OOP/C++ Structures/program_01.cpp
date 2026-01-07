// Create a structure Student with:
// - rollNo
// - name
// - marks
// Take input for one student and display the data.

#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float cgpa;
};

int main() {
    Student s1;

    cout << "Enter roll no: ";
    cin >> s1.rollNo;

    cin.ignore();
    cout << "Enter name: ";
    getline (cin, s1.name);

    cout << "Enter CGPA: ";
    cin >> s1.cgpa;

    cout << "==============================" << endl;

    cout << "Roll no: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    return 0;
}