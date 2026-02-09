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
using namespace std; 

// -------------------- Base Class --------------------
class Employee {

private: 
    int id;
    double salary;

public: 
    Employee (int id, double salary) {
        this->id = id;
        this->salary = salary;
    }

    void showEmployee() const {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

// -------------------- Derived Class --------------------
class Manager : public Employee {

private: 
    string department;

public: 
    Manager (int id, double salary, string dept): Employee(id, salary), department(dept) {}

    void showManager() const {
        showEmployee();
        cout << "Department: " << department << endl;
    }
};

// -------------------- Main Function --------------------
int main() {
    Manager m1(101, 45000, "Management");
    m1.showManager();

    return 0;
}