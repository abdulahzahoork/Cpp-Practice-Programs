#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size == 0) {
        cout << "Array is empty";
    }

    int temp[size];
    int j=0;

    for (int i=0; i<size-1; i++) {
        if (arr[i] != arr[i+1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size-1];

    cout << "Array after removing duplicates: ";
    for (int i=0; i<j; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}