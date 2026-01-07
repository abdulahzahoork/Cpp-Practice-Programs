// Check if the given year is a leap year

#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year%4 == 0 && year%100 != 0 || year%400==0){
        cout << "Leap Year" << endl;
    } else {
        cout << "Normal Year" << endl;
    }
    return 0;
}