// Create a structure Book with:
// - id
// - title
// - price
// Write a function displayBook(Book b) that prints book details.

#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    double price;
};

void displayBook (Book b) {
    cout << "ID: " << b.id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Price: " << b.price << endl;
}

int main() {
    Book b;

    b.id = 13;
    b.title = "Structures";
    b.price = 100;

    displayBook (b);
    return 0;
}