// Problem: Counter Class

// Create a class Counter with:
// - Attribute: count

// A default constructor that initializes count = 0

// Function increment()

// Create multiple objects and check if each object has its own count.

#include <iostream>
using namespace std;

class Counter {

private:
    int count;

public: 
    Counter() {
        count = 0;
    }

    void increment() {
        count++;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter c1, c2, c3;

    c1.increment();
    c1.increment();
    c1.increment();
    c2.increment();
    c2.increment();
    c3.increment();

    cout << "Count of obj 1: " << c1.getCount() << endl;
    cout << "Count of obj 2: " << c2.getCount() << endl;
    cout << "Count of obj 3: " << c3.getCount() << endl;


    return 0;
}