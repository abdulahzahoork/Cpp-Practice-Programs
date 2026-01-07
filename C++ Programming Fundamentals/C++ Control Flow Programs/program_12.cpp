// Check Prime

#include <iostream>
using namespace std;

bool isPrime (int num) {
    if (num <= 1) 
    {
        return false;
    }
    if (num > 1) 
    {
        for (int i=2; i*i <= num; i++)
        {
            if (num % i == 0) 
            {
                return false;
            }
        }
    }
    return true;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
    return 0;
}