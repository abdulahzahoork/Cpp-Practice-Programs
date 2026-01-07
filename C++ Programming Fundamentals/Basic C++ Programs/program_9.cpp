// Convert Fahrenheit to Celcius

#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
    float f_temp;
    cout << "Enter temperature in fahrenheit: ";
    cin >> f_temp;
    float c_temp = (f_temp-32.0) * 5.0/9.0;
    cout << fixed << setprecision(2);
    cout << "Temperature in Celcius: " << c_temp << endl;
    return 0;
}