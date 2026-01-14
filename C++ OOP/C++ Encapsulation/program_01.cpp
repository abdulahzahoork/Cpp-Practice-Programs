// Create a class Student with:

// private: 
//   - name
//   - age

// a constructor to initialize both
// a function display() to print data
// No getters/setters allowed


// =====================================================================================================


#include <iostream>
using namespace std;

class Student {

private: 
    string name;
    int age;

public: 
    Student (string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s("Abdullah", 22);
    s.display();
}