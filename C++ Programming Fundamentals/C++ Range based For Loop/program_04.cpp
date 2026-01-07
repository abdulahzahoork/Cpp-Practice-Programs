// Modify the vector so it becomes {20, 30, 40}.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    for (auto &x : v) {
        x += 10;
    }

    cout << "Vector after modification: ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}