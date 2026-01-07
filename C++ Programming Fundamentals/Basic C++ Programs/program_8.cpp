// Print ASCII value of a character

#include <iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII value of " << c << " is: " << static_cast<int>(c) << endl;
    return 0;
}