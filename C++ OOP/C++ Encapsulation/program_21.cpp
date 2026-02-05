// Questions to analyze:

// Will a get value x or y?
// Why?

#include <iostream>
using namespace std;

class Test {
    int a;
    int b;
public:
    Test(int x, int y) : b(y), a(x) {}
    void show() {
        cout << "a = " << a << " b = " << b;
    }
};

int main() {
    Test t (1, 2);
    t.show();

    return 0;
}