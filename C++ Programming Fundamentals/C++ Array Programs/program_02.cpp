// C++ Program to Find the Minimum and Maximum Element of an Array

#include <iostream>
using namespace std;

int getMin (int arr[], int size) {
    int min = arr[0];
    for (int i=1; i<size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
} 

int getMax (int arr[], int size) {
    int max = arr[0];
    for (int i=1; i<size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Minimum element: " << getMin(arr, size) << endl;
    cout << "Maximum element: " << getMax(arr, size) << endl;
    return 0;
}