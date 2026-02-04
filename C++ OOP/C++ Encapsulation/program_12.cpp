// Class Rectangle:
// - Attributes: length, width

// Parameterized constructor

// Copy constructor

// Function area()

// Create one object and copy it into another.

#include <iostream>
using namespace std;

class Rectangle {

private: 
    double length, width;

public: 
    Rectangle (double len, double wid) {
        length = len;
        width = wid;
    }

    Rectangle (const Rectangle &r) {
        length = r.length;
        width = r.width;
    }

    void area() const {
        cout << "Area: " << length*width << endl;
    }
};

int main() {
    Rectangle r1 (22, 3.5);
    Rectangle r2 = r1;

    r1.area();
    r2.area();

    return 0;
}