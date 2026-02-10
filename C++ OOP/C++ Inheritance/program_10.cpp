// Create two base classes:
// Class A
// - int a
// function setA()

// Class B
// - int b
// function setB()

// Derived class C : public A, public B
// function sum() that prints a + b

// Task: Create object of C and print sum.

#include <iostream>
using namespace std;

// ----------------- Base Class (A) -----------------
class A {

private: 
    int a;

public: 
    A(int a) {
        this->a = a;
    }

    int getA() const {
        return a;
    }
};

// ----------------- Base Class (B) -----------------
class B {

private: 
    int b; 

public: 
    B(int b) {
        this->b = b;
    }

    int getB() const {
        return b;
    }
};

// ----------------- Derived Class (C) -----------------

class C : public A, public B {

public: 
    C (int a, int b): A(a), B(b) {}

    int sum() const {
        return getA()+getB();
    }
};

// ----------------- Main Function -----------------

int main() {
    int a, b;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    C c(a, b);

    cout << "Sum: "<< c.sum();

    return 0;
}