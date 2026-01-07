// C++ Program to check if two Arrays are Equal or not

#include <iostream>
#include <algorithm>
using namespace std;

bool checkEquality (int arr[], int arr2[], int n, int m) {
    if (n != m) return false;

    sort (arr, arr + n);
    sort (arr2, arr2 + m);

    for (int i=0; i<n; i++) {
        if (arr[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main () {
    int n, m;
    cout << "Enter number of elements for first array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of elements for second array: ";
    cin >> m;

    int arr2[m];
    cout << "Enter elements: ";
    for (int i=0; i<m; i++) {
        cin >> arr2[i];
    }

    if (checkEquality(arr, arr2, n, m)) {
        cout << "Arrays are Equal." << endl;
    } else {
        cout << "Arrays are not equal." << endl;
    }
    return 0;
}