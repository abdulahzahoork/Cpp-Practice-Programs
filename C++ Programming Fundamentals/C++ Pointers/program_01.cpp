// C++ Pointers

#include <iostream>
using namespace std;

int main() {
    int var = 12;
    int* ptr = &var;
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Address of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "=============================" << endl;
    *ptr = 9;
    cout << "Value pointed by ptr after change: " << *ptr << endl;
    cout << "It changed original value of var: " << var << endl;
    return 0;
}