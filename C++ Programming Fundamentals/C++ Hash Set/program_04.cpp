// Print "Duplicate Found" as soon as duplicate appears.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n = 10;
    int x;
    unordered_set<int> s;

    cout << "Enter 10 numbers: ";
    for (int i=0; i<n; i++) {
        cin >> x;

        if (s.find(x) != s.end()) {
            cout << "Duplicate Found" << endl;
            return 0;
        }
        s.insert(x);
    }
    cout << "No Duplicates" << endl;
    return 0;
}