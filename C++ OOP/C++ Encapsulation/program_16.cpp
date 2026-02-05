// Problem: Counter

// Class Counter:
// - Attribute: count

// Parameterized constructor
// Copy constructor
// Function increment()

// Check whether both objects maintain separate counts.

#include <iostream>
using namespace std;

class Counter {

private: 
    int count;

public: 
    Counter (int c) {
        count = c;
    }

    Counter (const Counter &x) {
        count = x.count;
    }

    void increment(int n) {
        count += n;
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(30);
    Counter c2 = c1;

    c1.increment(10);
    c2.increment(5);

    return 0;
}