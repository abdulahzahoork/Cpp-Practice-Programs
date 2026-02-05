// Problem: Car

// Class Car:
// - string brand
// - int speed

// Requirements:
// Initialize using initializer list
// Function showCar()

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {

private: 
    string brand;
    int speed;

public: 
    Car (string b, int s): brand(b), speed((s<0)? 0 : s) {}

    void showCar() const {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
}; 

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;
    cin.ignore();

    vector<Car> cars;
    cars.reserve(n);

    string brand;
    int speed;

    for (int i=0; i<n; i++) {
        cout << "Enter brand name: ";
        getline(cin, brand);
        cout << "Enter speed: ";
        cin >> speed;
        cin.ignore();

        cars.emplace_back(brand, speed);
        cout << endl;
    }

    cout << "---------- Cars Details ----------" << endl;

    for (int i=0; i<n; i++) {
        cout << "Car no. " << i+1 << endl;
        cars[i].showCar();
        cout << endl;
    }

    return 0;
}