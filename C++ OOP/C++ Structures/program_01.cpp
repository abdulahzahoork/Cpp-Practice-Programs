// Create a structure Student with:
// - rollNo
// - name
// - marks
// Take input for one student and display the data.

#include <iostream>
using namespace std;

struct Student {
    int rollNo, marks;
    string name;
};

int main() {
    Student s;

    cout << "Enter Roll no: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, s.name);

    cout << "Enter marks: ";
    cin >> s.marks;
    cout << endl;

    // Output Data: 
    cout << "Roll no: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}