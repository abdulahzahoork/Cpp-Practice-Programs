// Multiply Two Matrices in C++

#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter number of rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter number of rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }

    int arr1[rows1][cols1];
    int arr2[rows2][cols2];
    int arrProduct[rows1][cols2];

    cout << "Enter " << rows1*cols1 << " elements for first matrix: ";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for second matrix: ";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            arrProduct[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                arrProduct[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Product of the matrices: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << arrProduct[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}