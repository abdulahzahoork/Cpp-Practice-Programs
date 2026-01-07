// Print array after removing duplicates.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> s;
    for (int i=0; i<n; i++) {
        s.insert(arr[i]);
    }

    cout << "Array after removing duplicates: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}