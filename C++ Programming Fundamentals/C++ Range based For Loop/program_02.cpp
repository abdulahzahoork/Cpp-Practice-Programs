// Calculate and print the sum of elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    int sum = 0;
    for (auto x : v) {
        sum += x;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}