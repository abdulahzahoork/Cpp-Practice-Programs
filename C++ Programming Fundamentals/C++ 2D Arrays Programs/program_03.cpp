// Given a 2D array, find the sum of elements in Principal and Secondary diagonals.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter " << rows*cols << " elements: ";
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cin >> arr[i][j];
        }
    }

    int principleDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i=0; i<rows; i++) {
        principleDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][rows-i-1];
    }

    cout << "Principle Diagonal Sum = " << principleDiagonalSum << endl;
    cout << "Secondary Diagonal Sum = " << secondaryDiagonalSum << endl;

    return 0;
}