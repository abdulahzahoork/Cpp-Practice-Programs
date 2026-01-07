// Print sum of each row of the given matrix.

#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int sum = 0;
    for (auto &x : matrix) {
        for (auto y : x) {
            sum  += y;
        }
    }
    cout << "Sum = " << sum << endl;
    return 0;
}