// Program to check whether a number is an Armstrong number or not.
// An Armstrong number of order n is a number that is equal to the sum of its own digits each raised to the power of n.

#include <iostream>
#include <cmath>
using namespace std;

int numLength (int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /=10;
    }
    return count;
}

void checkArmstrong (int num) {
    int temp = num;
    int result = 0;
    int length = numLength (num);

    while (temp > 0) {
        int digit = temp % 10;
        result = result + pow(digit, length);
        temp/=10;
    }
    
    cout << ((num == result)? "Armstrong": "Non-Armstrong") << endl; 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkArmstrong (num);
    return 0;
}