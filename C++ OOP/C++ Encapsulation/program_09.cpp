// Problem: Point in 2D Plane

// Class Point:
// - Attributes: x, y

// Parameterized constructor

// Function displayPoint()

#include <iostream>
using namespace std;

class Point{

private:
    int x, y;

public: 
    Point (int x, int y) {
        this->x = x;
        this->y = y;
    }

    void displayPoint() const {
        cout << "Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(3, 4);
    p.displayPoint();
}