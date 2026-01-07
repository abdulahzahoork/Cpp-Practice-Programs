// Calculate simple interest

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int P, R, T;
    float interest;
    cout << "Enter principle amount, Time, and Rate: ";
    cin >> P >> T >> R;
    interest = (P * T * R)/100;
    cout << fixed << setprecision(2);
    cout << interest << endl;
    return 0;
}