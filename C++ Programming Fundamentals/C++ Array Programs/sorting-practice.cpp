#include <iostream>
using namespace std;

// ------------ SELECTION SORT ------------
void selectionSort (int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        int minIdx = i;
        for (int j=i+1; j<size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap (arr[i], arr[minIdx]);
    }
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

    selectionSort(arr, size);

    cout << "Array after sorting: ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}