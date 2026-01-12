// Problem 2: Employee Salary

// Create a structure Employee having:
// - empID
// - empName
// - basicSalary

// Tasks:
// 1. Input data for n employees
// 2. Calculate net salary using:
//     - HRA = 10% of basic
//     - Bonus = 5% of basic
// 3. Display employee name and net salary

#include <iostream>
using namespace std;

struct Employee {
    int empID;
    string empName;
    long long basicSalary;

    void getDetails() {
        cout << "Enter your employee ID: ";
        cin >> empID;

        cin.ignore();
        cout << "Enter your name: ";
        getline(cin, empName);

        cout << "Enter your basic salary: ";
        cin >> basicSalary;
    }

    long long netSalary() {
        int hra = basicSalary * 0.10;
        int bonus = basicSalary * 0.05;
        long long net_salary = basicSalary + hra + bonus;
        return net_salary;
    }

    void showDetails() {
        cout << "Employee Name: " << empName << endl;
        cout << "Net Salary: " << netSalary() << endl;
    }
};

int main() {
    Employee emp[3];

    // Input Data from the user
    for (int i=0; i<3; i++) {
        cout << "Enter Details of Employee no. " << i+1 << ": " << endl;
        emp[i].getDetails();
        cout << endl;
    }

    // Output Names and Net Salaries
    cout << "---------- Employees' Details ----------" << endl;
    cout << endl;

    for (int i=0; i<3; i++) {
        emp[i].showDetails();
        cout << endl;    
    }

    return 0;
}