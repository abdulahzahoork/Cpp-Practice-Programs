// Create a base class Employee with:
// - id
// - salary

// Constructor to initialize them
// showEmployee()

// Create a derived class Manager with:
// - department

// Constructor that also calls base class constructor
// showManager()

// Task:
// Create a Manager object and display all details.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ------------------- Base Class (Employee) -------------------

class Employee {

private: 
    string empID;
    double salary;

public: 
    Employee (string id, double sal): empID(id), salary((sal<0)? 0 : sal) {}

    void showEmployee() const {
        cout << "ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};

// ------------------- Derived Class (Manager) -------------------

class Manager : public Employee {

private: 
    string department;

public: 
    Manager (string id, double sal, string dept): Employee(id, sal), department(dept) {}

    void showManager() const {
        showEmployee();
        cout << "Department: " << department << endl;
    }
};

// ------------------- Main Function -------------------

int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;
    cin.ignore();

    string id, department;
    double salary;

    vector<Manager> managers;
    managers.reserve(n);

    for (int i=0; i<n; i++) {
        cout << "\nEnter details of Manager no. " << i+1 << ": " << endl;
        
        cout << "Enter ID: ";
        getline (cin, id);

        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();

        cout << "Enter Department: ";
        getline(cin, department);

        managers.emplace_back(id, salary, department);
    }

    cout << "\n------------- Managers Details -------------" << endl;

    for (const auto &m : managers) {
        m.showManager();
        cout << endl;
    }

    return 0;
}