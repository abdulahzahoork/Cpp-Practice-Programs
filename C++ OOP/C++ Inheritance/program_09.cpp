// Base class Exam:
// - marks of 3 subjects

// Derived class Result:
// function calculateAverage()

// Task: Print average marks.

// solve it using array

#include <iostream>
using namespace std;

// ----------------- Base Class -----------------
class Exam {

private: 
    int marks[3];

public:
    Exam (int m[3]) {
        for (int i=0; i<3; i++) {
            marks[i] = (m[i]<0)? 0 : m[i];
        }
    }

    int getMarks(int index) {
        if (index >= 0 && index <= 2) {
            return marks[index];
        }
        cout << "Invalid index!" << endl;
        return 0;
    }
};

// ----------------- Derived Class -----------------
class Result : public Exam {

public: 
    Result (int m[3]) : Exam(m) {}

    int sum = 0;
    double calculateAverage() {
        for (int i=0; i<3; i++) {
            sum += getMarks(i);
        }
        return sum/3;
    }
};

// ----------------- Main Function -----------------

int main() {
    int marks[3];
    for (int i=0; i<3; i++) {
        cout << "Enter marks of Subject " << i+1 << ": ";
        cin >> marks[i];
    }

    Result r(marks);

    cout << "Average Marks: " << r.calculateAverage() << endl;

    return 0;
}