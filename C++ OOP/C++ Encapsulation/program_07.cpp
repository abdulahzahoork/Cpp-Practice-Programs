// Problem: System Configuration

// Create a class SystemConfig with:
// - Attributes: OS, version

// A default constructor that prints: "System Initialized" and sets:
// - OS = "Windows"
// - version = 10

// Create object and observe constructor output before calling any function.

#include <iostream>
#include <string>
using namespace std;

class SystemConfig {

private: 
    string os;
    double version;

public: 
    SystemConfig() {
        os = "Windows";
        version = 10;
        cout << "System Initialized" << endl;
    }
};

int main() {
    SystemConfig sys;

    return 0;
}