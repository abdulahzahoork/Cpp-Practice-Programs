// Print common elements between two arrays.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    unordered_set<int> s;

    for (int i=0; i<4; i++) {
        s.insert(a[i]);
    }

    cout << "Common elements: ";
    for (int i=0; i<4; i++) {
        if (s.find(b[i]) != s.end()) {
            cout << b[i] << " ";
        }
    }
    cout << endl;

    return 0;
}