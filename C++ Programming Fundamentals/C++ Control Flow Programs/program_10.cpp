// Find LCM of two numbers

#include <iostream>
using namespace std;

int gcd (int num_1, int num_2) {
    while (num_2 != 0) {
        int temp = num_2;
        num_2 = num_1 % num_2;
        num_1 = temp;
    }
    return num_1;
}

int main() {
    int a, b, lcm = 1;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    lcm = (a * b)/gcd(a, b);
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}