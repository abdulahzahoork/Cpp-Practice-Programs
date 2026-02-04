// Problem: Library Book

// Create a class Book with:
// - Attributes: title, pages

// A default constructor that sets:
// - title = "No Title"
// - pages = 100

// Function displayBook()

#include <iostream>
#include <string>
using namespace std;

class Book {

private:
    string title;
    int pages;

public:
    Book() {
        title = "No Title";
        pages = 100;
    }

    void displayBook() const {
        cout << "Title: " << title << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    Book b;
    b.displayBook();
}