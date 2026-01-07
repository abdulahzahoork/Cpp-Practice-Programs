// Check whether a character is vowel or a consonent.

#include <iostream>

using namespace std;

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
        cout << c << " is a vowel." << endl;
    } else {
        cout << c << " is a consonent." << endl;
    }
    return 0;
}