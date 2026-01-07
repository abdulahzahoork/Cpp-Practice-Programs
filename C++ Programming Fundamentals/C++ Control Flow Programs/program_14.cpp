// A neon number is a number where the sum of digits of the square of the number is equal to the number.
// The task is to check and print neon numbers in a range.

#include <iostream>
using namespace std;

bool checkNeon(int num)
{
    int square = num * num;
    int sum = 0;
    while (square > 0)
    {
        int digit = square % 10;
        sum += digit;
        square /= 10;
    }
    return (num == sum);
}

void neonInRange(int a, int b)
{
    cout << "Neon Numbers from " << a << " - " << b << " are: ";
    int count = 0;
    for (int n = a; n <= b; n++)
    {
        if (checkNeon(n))
        {
            cout << n << " ";
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
    neonInRange(a, b);
    return 0;
}