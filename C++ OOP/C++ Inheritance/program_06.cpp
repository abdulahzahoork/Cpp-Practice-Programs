// Problem: Base class Shape:
// -length
// - width;
// function setDimensions()

// Derived class Rectangle:
// function area()

// Task: Calculate and print area of rectangle.

#include <iostream>
using namespace std;

// ----------------- Base Class ----------------- 
class Shape {

private: 
    double length, width;

public: 
    Shape(double len, double wid): length((len<0)? 0 : len), width((wid<0)? 0 : wid) {}

    void setDimensions(double len, double wid) {
        length = (len<0)? 0 : len;
        width = (wid<0)? 0 : wid;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }
};

// ----------------- Derived Class -----------------
class Rectangle : public Shape {

public: 
    Rectangle (double len, double wid): Shape(len, wid) {}

    void area() const {
        cout << "Area: " << getLength() * getWidth() << endl;
    }
};

// ----------------- Main Function -----------------

int main() {
    double len, wid;

    cout << "Enter Length: ";
    cin >> len;

    cout << "Enter Width: ";
    cin >> wid;

    Rectangle r(len, wid);
    r.area();

    return 0;
}