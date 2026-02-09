// Problem: Static Counter

// Create class Counter with:
// - static int count;

// Functions:
// Constructor that increments count
// static void showCount() that prints total objects created

// In main():
// Counter c1, c2, c3;
// Counter::showCount();

// Must define count outside the class using ::

#include <iostream>
using namespace std;

class Counter {

private: 
    static int count;

public: 
    Counter() {
        count++;
        cout << "Object created" << endl;
    }

    static void showCount() {
        cout << "Total object created: " << count << endl;
    }
};

int Counter :: count = 0;

int main() {
    Counter c1, c2, c3;
    cout << endl;
    Counter :: showCount();
    
    return 0;
}