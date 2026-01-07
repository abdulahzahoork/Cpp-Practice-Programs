// Find largest among 3 numbers

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << a << " is greatest." << endl;
    } else if (b > a && b > c) {
        cout << b << " is greatest." << endl;
    } else {
        cout << c << " is greatest." << endl;
    }
    return 0;
}