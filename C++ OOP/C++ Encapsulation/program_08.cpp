// Problem: Student Class

// Create a class Student with:
// - Attributes: name, rollNo

// Parameterized constructor to initialize both values

// Function display()

// Create an object in main() like:
// - Student s("Abdullah", 101);
// and display the data.

#include <iostream>
#include <string>
using namespace std;

class Student {

private:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
    }
};

int main() {
    Student st("Abdullah", 27);
    st.display();

    return 0;
}