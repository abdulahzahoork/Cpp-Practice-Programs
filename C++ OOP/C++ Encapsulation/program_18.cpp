// Problem: Product

// Class Product:
// - Attributes: id, name, price

// Parameterized constructor
// Copy constructor
// Function showProduct()

#include <iostream>
#include <string>
using namespace std;

class Product {

private: 
    int id;
    string name;
    double price;

public:
    Product (int id, string name, double price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    Product (const Product &p) {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    void showProduct() const {
        cout << "Product ID: " << id << endl;
        cout << "Title: " << name << endl;
        cout << "Price: " << price << endl;
    }
}; 

int main() {
    Product p1 (101, "Milk", 219.99);
    Product p2 = p1;

    p1.showProduct();
    cout << endl;
    p2.showProduct();

    return 0;
}