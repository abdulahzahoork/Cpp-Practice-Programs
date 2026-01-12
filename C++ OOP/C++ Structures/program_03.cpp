// Problem 3: Book Store

// Create a structure Book:
// - bookID
// - title
// - price

// Tasks:
// Write a function to input book data
// Write a function to display book data
// Write a function that increases price by 10% if price < 1000

#include <iostream>
using namespace std;

double increasePrice (double price) {
    if (price < 1000) {
        price += price * 0.10;
    }
    return price;
}

struct Book {
    int bookID;
    string title;
    double price;

    void getDetails() {
        cout << "Enter book ID: ";
        cin >> bookID;

        cin.ignore();
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter price: ";
        cin >> price;
    }

    void showDetails() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << increasePrice(price) << endl;
    }
};



int main() {
    Book b[3];

    for (int i=0; i<3; i++) {
        cout << "Enter details for book no. " << i+1 << ": " << endl;
        b[i].getDetails();
        cout << endl;
    }

    cout << "---------- Books' Details ----------" << endl;
    for (int i=0; i<3; i++) {
        b[i].showDetails();
        cout << endl;
    }

    return 0;
}