// Given two arrays, the task is to find all the elements that are present in both the arrays i.e. common elements between both arrays in C++.

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 45, 54, 71, 76, 12};
    int arr2[] = {1, 7, 5, 4, 6, 12};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = (size1 < size2)? size1 : size2;

    int arr3[size3];

    int k = 0;
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k++] = arr1[i];
            }
        }
    }

    if (k>0) {
        for (int i=0; i<k; i++) {
            cout << arr3[i] << " ";
        }
    } else {
        cout << "No match found" << endl;
    }

    return 0;
}