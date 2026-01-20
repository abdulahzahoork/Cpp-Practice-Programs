// Create a class Employee:

// private: 
//   - namet
//   - salary

// constructor should:
//   - set salary to 0 if invalid

// getter for salary
// setter for salary

// =====================================================================================================

#include <iostream>
#include <vector>
using namespace std;

class Employee {
    private: 
        string name;
        double salary;

    public: 
        Employee(string n, double s): name(n), salary((s < 0) ? 0 : s) {}

        double getSalary() const {
            return salary;
        }

        void setSalary(double s) {
            salary = (s < 0) ? 0 : s;
            if (s < 0) {
                cout << "Salary can't be negative, so set to 0" << endl;
            }
        }

        string getName() const {
            return name;
        }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    vector<Employee> employees;
    employees.reserve(n);

    string name;
    double salary;

    for (int i = 0; i < n; i++) {
        cout << "Enter details for Employee no. " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> ws; // to consume any leading whitespace
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();

        employees.emplace_back(name, salary);
    }

    cout << "---------- Employee Details ----------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Employee no. " << i+1 << endl;
        cout <<" Name: " << employees[i].getName() << endl;
        cout << " Salary: " << employees[i].getSalary() << endl;
    }

    return 0;
}