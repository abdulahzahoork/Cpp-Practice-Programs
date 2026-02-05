// Problem: Car 

// Class Car:
// - string brand
// - int speed

// Functions:
// Car& setBrand(string b)
// Car& setSpeed(int s)
// Car& accelerate(int inc) // increases speed
// display()

// Test:
// Car c("Toyota", 0);
// c.setBrand("Honda").accelerate(50).setSpeed(120).display();


#include <iostream>
using namespace std;

class Car {

private: 
    string brand;
    int speed;

public: 
    Car (string b, int s) : brand(b), speed((s<0)? 0 : s) {}

    Car& setBrand(string b) {
        brand = b;
        return *this;
    }

    Car& setSpeed(int s) {
        speed = (s<0)? 0 : s;
        return *this;
    }

    Car& accelerate(int inc) {
        speed += inc;
        return *this;
    }

    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car c("Toyota", 0);
    c.setBrand("Honda").setSpeed(120).accelerate(10).display();
    cout << endl;
    return 0;
}