// Problem: Rectangle Class

// Create a class Rectangle with:
// - Attributes: length, width

// A default constructor that sets:
// - length = 1
// - width = 1

// A function area()

// Print the area using default values.

#include <iostream>
using namespace std;

class Rectangle {

private:
    double length, width;

public: 
    Rectangle() {
        length = 1;
        width = 1;
    }

    double area() const {
        return length*width;
    }
};

int main() {
    Rectangle r;
    cout << "Area: " << r.area();

    return 0;
}