// Check whether a given number exists in the set.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s = {10, 20, 30, 40, 50};
    int key;
    cout << "Enter key: ";
    cin >> key;

    if (s.find(key) != s.end()) {
        cout << "Key Found" << endl;
    } else {
        cout << "Key does not exist." << endl;
    }

    return 0;
}