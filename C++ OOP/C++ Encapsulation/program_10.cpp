// Problem: Distance Class

// Class Distance:
// - Attributes: meters, centimeters

// Parameterized constructor

// Function displayDistance()

#include <iostream>
using namespace std;

class Distance {

private: 
    int meters, centimeters;

public: 
    Distance (int m, int cm) {
        meters = m;
        centimeters = cm;
    }

    void displayDistance() const {
        cout << "Distance: " << meters << " m and " << centimeters << " cm" << endl;
    }
};

int main() {
    Distance d(500, 5);
    d.displayDistance();

    return 0;
}