// Program 2: Multiple Objects
// Objective: Understand destructor call order.

// Task:
// - Create a class Book
// - Constructor prints book name
// - Destructor prints "Book destroyed"
// - Create 2 objects inside main()

// Observe carefully:
// - Which destructor is called first and why?

// =====================================================================================================

#include <iostream>
#include <vector>
using namespace std;

class Book {

private: 
    int bookID;
    string bookTitle;
    double bookPrice;

public:
    Book (int id, string title, double price): bookID(id), bookTitle(title), bookPrice((price<0)? 0: price) {
        cout << "Constructor called for " << bookTitle << endl;
    }

    void showDetails() const {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << bookTitle << endl;
        cout << "Price: " << bookPrice << endl;
    }

    ~Book() {
        cout << "Book destroyed: " << bookTitle << endl;
    }
};

int main() {
    int n, id;
    string title;
    double price;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    vector<Book> books;
    books.reserve(n);

    for (int i=0; i<n; i++) {
        cout << "Enter book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter book title: ";
        getline (cin, title);

        cout << "Enter book price: ";
        cin >> price;
        cin.ignore();

        books.emplace_back(id, title, price);
        cout << endl;
    }

    cout << "---------- Books Details ----------" << endl;
    cout << endl;

    for (int i=0; i<n; i++) {
        books[i].showDetails();
        cout << endl;
    }

    return 0;
}