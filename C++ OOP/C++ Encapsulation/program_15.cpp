// Problem: Car

// Class Car:
// - Attributes: brand, speed

// Parameterized constructor
// Copy constructor
// Function accelerate()

// Test whether copied object behaves independently.

#include <iostream>
#include <string>
using namespace std;

class Car {

private: 
    string brand;
    int speed;

public: 
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    Car (const Car &c) {
        brand = c.brand;
        speed = c.speed;
    }

    void accelerate (int increment) {
        speed += increment;
        cout << "Speed of " << brand << ": " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1("Toyota", 120);
    Car c2 = c1;

    c1.accelerate(30);
    c2.accelerate(20);

    return 0;
}