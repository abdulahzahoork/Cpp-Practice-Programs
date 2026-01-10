// Create a structure Rectangle with:
// - Length
// - Width
// Add a member function to calculate and return area.

#include <iostream>
using namespace std;

struct Rectangle {
    int len, width;

    int calculateArea () {
        return len * width;
    }
};

int main() {
    Rectangle r1;

    cout << "Enter length: ";
    cin >> r1.len;

    cout << "Enter width: ";
    cin >> r1.width;

    cout << "Area of rectangle: " << r1.calculateArea() << endl;
    return 0;
}