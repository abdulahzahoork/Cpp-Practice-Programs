// Find the largest number using a range-based loop.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {12, 45, 3, 19};

    int largest = v[0];
    for (auto x : v) {
        if (x > largest) {
            largest = x;
        }
    }

    cout << "Largest number: " << largest << endl;
    return 0;
}