#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr1[rows][cols];
    int arr2[rows][cols];
    int arrSum[rows][cols];

    cout << "Enter " << rows*cols << " elements for 1st array: ";
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter " << rows*cols << " elements for 2nd array: ";
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cin >> arr2[i][j];
        }
    }

    cout << "Sum: " << endl;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cout << arrSum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}