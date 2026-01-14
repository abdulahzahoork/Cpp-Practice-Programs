// Create a class Rectangle with:

// private:
//   - length
//   - width

// a constructor
// a function area() that returns area
// no getters/setters allowed 

// =====================================================================================================


#include <iostream>
using namespace std;

class Rectangle {

private: 
    double len, width;

public: 
    Rectangle (double l, double w): len(l), width(w) {}

    double area() {
        return (len*width);
    }
};

int main() {
    Rectangle r(10.5, 3.2);
    cout << "Area of Rectangle: " << r.area() << endl;
    return 0;
}