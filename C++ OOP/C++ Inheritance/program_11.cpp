// Class PersonalInfo
// - name
// - age

// Class JobInfo
// - salary
// - designation

// Class Employee : public PersonalInfo, public JobInfo
// function displayEmployee()

#include <iostream>
using namespace std;


// ------------------ Base Class (PersonalInfo) ------------------
class PersonalInfo {

private: 
    string name;
    int age;

public: 
    PersonalInfo (string n, int a) : name(n), age((a<0)? 0 : a) {}

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void displayPersonalInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// ------------------ Base Class (JobInfo) ------------------

class JobInfo {

private: 
    double salary; 
    string designation;

public: 
    JobInfo (double sal, string dest): salary(sal), designation(dest) {}

    double getSalary() const {
        return salary;
    }

    string getDesignation() const {
        return designation;
    }

    void displayJobInfo() const {
        cout << "Salary: " << salary << endl;
        cout << "Designation: " << designation << endl;
    }
};

// ------------------ Derived Class (PersonalInfo + JobInfo) ------------------

class Employee : public PersonalInfo, public JobInfo {

public: 
    Employee (string n, int a, double sal, string dest): PersonalInfo(n, a), JobInfo(sal, dest) {}

    void displayEmployee() const {
        displayPersonalInfo();
        displayJobInfo();
    }
};

// ------------------ Main Function ------------------

int main() {
    string name;
    int age;
    double salary;
    string designation;

    cout << "Enter name: ";
    getline (cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;
    cin.ignore();

    cout << "Enter designation: ";
    getline(cin, designation);

    Employee emp(name, age, salary, designation);
    cout << endl;
    cout << "--------------- Employee Detail ---------------" << endl;
    emp.displayEmployee();

    return 0;
}