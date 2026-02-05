// Problem: Const Data Member

// Class Circle:
// - const float PI
// - float radius

// Requirements:
// Initialize PI using initializer list
// Function area()

#include <iostream>
using namespace std;

class Circle {

private: 
    const float PI;
    float radius;

public: 
    Circle (float r): PI (3.14), radius(r) {}

    void area() {
        cout << "Area of circle: " << PI*(radius*radius) << endl;
    }
};

int main() {
    Circle c(50);
    c.area();

    return 0;
}