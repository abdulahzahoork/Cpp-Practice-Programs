// Check Palindrome

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;
    int n = num;
    while (n>0) {
        int digit = n % 10;
        reversed = (reversed * 10) + digit;
        n /= 10;
    }
    cout << "Reversed = " << reversed << endl;
    if (num == reversed) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}