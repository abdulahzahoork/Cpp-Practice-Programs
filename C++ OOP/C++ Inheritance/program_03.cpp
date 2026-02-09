// Program 3 — Public vs Private Inheritance

// Create a base class Vehicle with:
// - speed (private)

// Setter and getter for speed

// Create a derived class Car (public inheritance) with:
// - brand

// A function to display both speed and brand

// Task:
// Set speed using setter and display details.

#include <iostream>
using namespace std;

// -------------------- Base Class --------------------
class Vehicle {

private: 
    int speed;

public: 
    Vehicle (int s): speed(s) {}

    void setSpeed(int s) {
        speed = (s<0)? 0 : s;
    }

    int getSpeed() const {
        return speed;
    }
};

// -------------------- Derived Class --------------------

class Car : public Vehicle {

private: 
    string brand;

public: 
    Car (int s, string b): Vehicle(s), brand(b) {}

    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << getSpeed() << endl;
    }
};

int main() {
    Car c1 (120, "Toyota");
    c1.display();

    return 0;
}