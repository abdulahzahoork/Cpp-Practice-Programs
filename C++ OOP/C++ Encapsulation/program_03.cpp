// Problem: Mobile Phone

// Create a class Mobile with:
// - Attributes: brand, price

// A default constructor that sets:
// - brand = "Not Set"
// - price = 0

// A function showDetails()

#include <iostream>
using namespace std;

class Mobile {

private: 
    string brand;
    double price;

public: 
    Mobile() {
        brand = "Not Set";
        price = 0;
    }

    void showDetails() const {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Mobile m;
    m.showDetails();

    return 0;
}