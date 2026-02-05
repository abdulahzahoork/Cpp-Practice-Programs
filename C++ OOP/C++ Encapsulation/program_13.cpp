// Problem: Mobile

// Class Mobile:
// - Attributes: brand, price

// Parameterized constructor

// Copy constructor

// Function showDetails()

#include <iostream>
#include <string>
using namespace std;

class Mobile {

private: 
    string brand;
    double price;

public: 
    Mobile (string b, double p) {
        brand = b;
        price = p;
    }

    Mobile (const Mobile &m) {
        brand = m.brand;
        price = m.price;
    }

    void showDetails() const {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Mobile m1("OnePlus", 53000);
    Mobile m2 = m1;

    m1.showDetails();
    cout << endl;
    m2.showDetails();

    return 0;
}