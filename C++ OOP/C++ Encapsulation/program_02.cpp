// Create a class Rectangle with:

// private:
//   - length
//   - width

// a constructor
// a function area() that returns area
// no getters/setters allowed 

// =====================================================================================================


#include <iostream>
#include <vector>
using namespace std;

class Rectangle {

private: 
    double len, width;

public: 
    Rectangle (double l, double w): len(l), width(w) {}

    double area(){
        return (len*width);
    }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    vector<Rectangle> rectangles;
    rectangles.reserve(n);
    double len, width;

    for (int i=0; i<n; i++) {
        cout << "Enter details of Rectangle no. " << i+1 << endl;
        cout << "Enter Length: ";
        cin >> len;
        cout << "Enter Width: ";
        cin >> width;
        cout << endl;

        rectangles.emplace_back(len, width);
    }

    cout << "---------- Calculations: ----------" << endl;
    cout << endl;
    for (int i=0; i<n; i++) {
        cout << "Rectangle no. " << i+1 << endl;
        cout << "Area: " << rectangles[i].area() << endl;
        cout << endl;
    }

    return 0;
}