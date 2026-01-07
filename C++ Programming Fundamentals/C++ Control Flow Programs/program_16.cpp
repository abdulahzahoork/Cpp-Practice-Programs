// Program to print all Armstrong numbers in a given range.

#include <iostream>
#include <cmath>
using namespace std;

int numLength (int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

bool checkArmstrong (int num) {
    int temp = num;
    int result = 0;
    int len = numLength(num);
    while (temp > 0) {
        int digit = temp % 10;
        result = result + pow(digit, len);
        temp /=10;
    }

    return (num == result)? true:false;
}

void checkArmstrongInRange (int start, int end) {
    cout << "Armstrong numbers from " << start << " to " << end << " are: ";
    for (int i=start; i<=end; i++) {
        if (checkArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    if (start > end) {
        swap (start, end);
    }

    checkArmstrongInRange (start, end);
    return 0;
}