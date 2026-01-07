// Take 5 integers from user and print only unique values.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    int n;

    cout << "Enter 5 numbers: ";
    for (int i=0; i<5; i++) {
        cin >> n;
        s.insert(n);
    }

    cout << "You entered: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}