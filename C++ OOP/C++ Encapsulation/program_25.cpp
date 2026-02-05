// Problem: Car Class 

// Class Car:
// Data members:
// - string brand
// - int speed

// Requirements:
// Constructor
// Getters & Setters for both
// In setter, use this->speed = speed;
// Function accelerate(int inc)

// Destructor prints:
// Car object deleted

#include <iostream>
using namespace std;

class Car {

private: 
    string brand;
    int speed;

public:     
    Car (string b, int s): brand(b), speed((s<0)? 0 : s) {}

    ~Car() {
        cout << "Car Object Deleted" << endl;
    }

    string getBrand() const {
        return brand;
    }

    int getSpeed() const {
        return speed;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    void setSpeed(int speed) {
        this->speed = (speed < 0)? 0 : speed;
    }

    void accelerate (int inc) {
        if (inc > 0) {
            speed += inc;
        }
    }
};

int main() {
    Car c1("Toyota", 90);
    Car c2("Honda", 80);
    Car c3("Suzuki", 70);

    c1.accelerate(10);
    c2.accelerate(20);
    c3.accelerate(30);

    cout << "Speed of " << c1.getBrand() << ": " << c1.getSpeed() << " km/h" << endl;
    cout << "Speed of " << c2.getBrand() << ": " << c2.getSpeed() << " km/h" << endl;
    cout << "Speed of " << c3.getBrand() << ": " << c3.getSpeed() << " km/h" << endl;

    return 0;
}