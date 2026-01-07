// Find GCD of two numbers
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b);
    // int x = a, y = b;
    // while (b != 0) {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // cout << "GCD of " << x << " and " << y << " is: " << a << endl;
    return 0;
}