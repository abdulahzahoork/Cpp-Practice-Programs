#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double p, t, r, amount, CI;
    cout << "Enter principle amount, time, and rate: ";
    cin >> p >> t >> r;
    amount = p * pow((1 + r/100), t);
    CI = amount - p;
    cout << "Compound Interest: " << CI << endl;
    return 0;
}