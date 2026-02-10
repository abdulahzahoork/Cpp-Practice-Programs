// Base class Vehicle:
// - int speed

// function showSpeed()

// Derived class Bike:
// - string model

// function showBike()

// Task: Create a Bike object, set speed & model, and display both.

#include <iostream>
#include <string>
using namespace std;

// ------------------ Base Class ------------------
class Vehicle {

private: 
    int speed;

public: 
    Vehicle (int s): speed(s) {}

    void showSpeed() const {
        cout << "Speed: " << speed << endl;
    }
};

// ------------------ Derived Class ------------------
class Bike : public Vehicle {

private: 
    string model;

public: 
    Bike(int s, string m): Vehicle(s), model(m) {}

    void showBike() const {
        showSpeed();
        cout << "Model: " << model << endl;
    }
};

// ------------------ Main Function ------------------

int main() {
    int speed;
    string model;

    cout << "Enter Speed: ";
    cin >> speed;
    cin.ignore();

    cout << "Enter Model: ";
    getline(cin, model);

    cout << endl;
    
    Bike b1(speed, model);
    b1.showBike();

    return 0;
}