// Program to Remove All Occurrences of an Element in an Array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elementToRemove = 2;

    int temp[size];
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != elementToRemove) {
            temp[j++] = arr[i];
        }
    }

    cout << "Array after removing all occurrences of " << elementToRemove << ": ";
    for (int i = 0; i < j; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}
