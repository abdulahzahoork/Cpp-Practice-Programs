// Create a class Student with:

// private: 
//   - name
//   - age

// a constructor to initialize both
// a function display() to print data
// No getters/setters allowed


// =====================================================================================================


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {

private: 
    string name;
    int age;

public: 
    Student (string n, int a): name(n), age(a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();
    cout << endl;

    vector<Student> students;
    students.reserve(n);
    string name;
    int age;

    for (int i=0; i<n; i++) {
        cout << "Enter details for Student no. " << i+1 << endl;
        cout << "Enter name: ";
        getline(cin, name); 
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << endl;
        students.emplace_back(name, age);
    }

    cout << endl;
    cout << "---------- Students Details ----------" << endl;
    for (int i=0; i<n; i++) {
        cout << "Student no. " << i+1 << endl;
        students[i].display();
        cout << endl;
    }

    return 0;
}
