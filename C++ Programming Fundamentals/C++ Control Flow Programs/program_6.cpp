// Calculate sum of first n natural numbers.

#include <iostream>

using namespace std;

int main() {
    int n, sum=0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=0; i<=n; i++){
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers = " << sum << endl;
    return 0;
}