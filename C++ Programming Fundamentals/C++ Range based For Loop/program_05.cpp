// Convert all characters to uppercase using a range-based loop.

#include <iostream>
using namespace std;

int main() {
    string s = "pakistan";

    for (auto &c : s) {
        c = toupper(c);
    }

    cout << "String after conversion: ";
    for (auto c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}