// Imagine you are working as a software developer for a small grocery store.
// The store owner wants an automated billing system to manage customer purchases.
// Your task is to write a C++ program that helps the cashier calculate the total bill for a customer based on the type and quantity of items purchased.

// The store sells five products with fixed prices:
// Product	Price
// 1. Rice	200 RS per kg
// 2. Sugar	150 RS per kg
// 3. Milk	220 RS per liter
// 4. Bread	100 RS per piece
// 5. Eggs	30 RS per egg
// Your program should:

// Use an array to store product prices.

// Use a loop to allow the cashier to enter multiple items (item number and quantity).

// Use a function to calculate the bill based on selected items.

// Use conditional statements to check if the cashier enters a valid item number.

// At the end, display the total bill amount.

// #include <iostream>
// using namespace std;

// int calcBill (int price, int qty) {
//     return price * qty; 
// }

// int main() {
//     int price[5] = {200, 150, 220, 100, 30};

//     // variables
//     int itemNo, qty;
//     char choice;
//     int totalBill = 0;

//     // Menu
//     cout << "MENU: \n1. Rice\n2. Sugar\n3. Milk\n4. Bread\n5. Eggs" << endl;

//     //Do-While loop
//     do {
//         cout << "Enter item no: ";
//         cin >> itemNo;

//         if (itemNo < 1 || itemNo > 5) {
//             cout << "Invalid Input" << endl;
//             continue;
//         }

//         cout << "Enter quantity: ";
//         cin >> qty;

//         totalBill = calcBill (price[itemNo-1], qty);

//         cout << "Want more items? (y/n): ";
//         cin >> choice;

//     } while (choice == 'y' || choice == 'Y');

//     // Total bill
//     cout << "Total Bill = " << totalBill << " Rs" << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int calcBill (int price, int qty) {
    return price * qty;
}

int main() {
    cout << "MENU: \n1. Rice 200 Rs/kg\n2. Sugar 150 Rs/kg\n3. Milk 220 Rs/litre\n4. Bread 100 Rs\n5. Eggs 30 Rs/dozen" << endl;
    int price[5] = {200, 150, 220, 100, 30};

    int itemNo, qty, totalBill = 0;
    char choice;

    do {
        cout << "Enter Item No: ";
        cin >> itemNo;

        if (itemNo < 1 || itemNo > 5) {
            cout << "Invalid Input" << endl;
            continue;
        }

        cout << "Enter quantity: ";
        cin >> qty;

        totalBill = calcBill (price[itemNo-1], qty);

        cout << "Want more items? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Total Bill = " << totalBill << endl;

    return 0;
}