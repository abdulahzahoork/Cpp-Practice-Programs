// Program For Determinant of a Matrix using 2D Array

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 elements for the 3x3 matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int determinant = (arr[0][0] * (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])) 
                        - (arr[0][1] * (arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]))
                        + (arr[0][2] * (arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]));
    cout << "Determinant = " << determinant << endl;
    return 0;   
}