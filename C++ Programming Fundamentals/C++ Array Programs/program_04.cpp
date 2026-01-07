// Given two sorted arrays, the task is to merge them in a sorted manner.

#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[])
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            mergedArray[k++] = arr1[i++];
        }
        else
        {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < size1)
    {
        mergedArray[k++] = arr1[i++];
    }

    while (j < size2)
    {
        mergedArray[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;

    int mergedArray[size3];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    cout << "Merged Sorted Array: ";
    
    for (int i=0; i < size3; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    
    return 0;
}