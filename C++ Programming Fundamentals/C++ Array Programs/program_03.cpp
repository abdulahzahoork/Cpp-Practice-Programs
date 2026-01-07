// C++ Program For Average of an Array 

#include <iostream>
using namespace std;

double getAverage (int arr[], int size) {
    int sum = 0;
    for (int i=0; i< size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
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

    cout << "Average = " << getAverage(arr, size) << endl;
    return 0;
}