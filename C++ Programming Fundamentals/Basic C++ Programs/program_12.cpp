// Calculate Area and Perimeter of a Rectangle

#include <iostream>
using namespace std;
int main(){
    int len, width;
    cout << "Enter length and width: ";
    cin >> len >> width;
    cout << "Area: " << len*width << endl;
    cout << "Perimeter: " << 2 * (len+width) << endl;
    return 0;
}