// Create a structure Employee with:
// - id
// - name
// - salary
// Input data for 2 employees and print their details.

#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    Employee emp[2];

    // Input Data
    for (int i=0; i<2; i++) {
        cout << "Enter Details of Employee " << i+1 << endl;

        cout << "Enter ID: ";
        cin >> emp[i].id;

        cin.ignore();
        cout << "Enter name: ";
        getline (cin, emp[i].name);

        cout << "Enter salary: ";
        cin >> emp[i].salary;

        cout << endl;
    }

    // Output Data
    cout << "---------- Employee Data ----------" << endl;
    for (int i=0; i<2; i++) {
        cout << "Employee " << i+1 << endl;
        cout << "ID: " << emp[i].id << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Salary: " << emp[i].salary << endl;
        cout << endl;
    }

    return 0;
}