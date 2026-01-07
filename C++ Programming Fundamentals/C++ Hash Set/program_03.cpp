// Print the number of distinct elements.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4};
    int n = 6;

    unordered_set<int> s;

    for (int i=0; i<n; i++) {
        s.insert(arr[i]);
    }

    cout << "No. of distinct elements: " << s.size() << endl;
    return 0;
}