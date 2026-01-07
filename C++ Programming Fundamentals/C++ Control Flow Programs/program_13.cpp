// Write a program to check prime numbers in range.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeInRange(int a, int b)
{
    cout << "Prime numbers from " << a << " - " << b << " are: ";
    int count = 0;
    for (int num = a; num <= b; num++)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            count++;
        }
    }
    if (count == 0)
    {
        cout << "None";
    }
    cout << endl;
}

int main()
{
    int a, b;
    cout << "Enter lower limit of interval: ";
    cin >> a;
    cout << "Enter upper limit of interval: ";
    cin >> b;
    if (a > b)
    {
        swap(a, b);
    }
    primeInRange(a, b);
    return 0;
}