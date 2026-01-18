// Create a class Car with:

// private: 
//   - brand
//   - price

// constructor
// getter for both
// setter only for price with validation (price > 0)

// =====================================================================================================

#include <iostream>
#include <vector>
using namespace std;

class Car {

private: 
    string brand;
    long long price;

public: 
    Car (string b, long long p): brand(b), price((p<0)? 0 : p) {}

    string getBrand() const {
        return brand;
    }

    long long getPrice() const {
        return price;
    }

    void setPrice (long long p) {
        price = (p<0)? 0 : p;
        if (p < 0) {
            cout << "Price can't be negative, so set to 0" << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;
    cin.ignore();

    vector<Car> cars;
    cars.reserve(n);
    string brand;
    long long price;

    for (int i=0; i<n; i++) {
        cout << "Enter details for Car no. " << i+1 << endl;
        cout << "Enter brand name: ";
        getline(cin, brand);
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();

        cars.emplace_back(brand, price);
        cout << endl;
    }

    cout << "---------- Cars' Details ----------" << endl;
    cout << endl;
    
    for (int i=0; i<n; i++) {
        cout << "Car no. " << i+1 << endl;
        cout << "Brand: " << cars[i].getBrand() << endl;
        cout << "Price: " << cars[i].getPrice() << endl;
        cout << endl;
    }

    return 0;
}