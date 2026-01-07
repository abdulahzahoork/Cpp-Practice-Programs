// Count even numbers

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 8, 11, 14};

    int count = 0;
    for (auto x : arr) {
        if (x % 2 == 0) {
            count++;
        }
    }
    cout << "Count of even numbers = " << count << endl;
    return 0;
}