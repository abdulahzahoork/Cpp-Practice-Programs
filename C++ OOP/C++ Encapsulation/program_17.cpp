// Problem: SystemConfig

// Class SystemConfig:
// - Attributes: OS, version

// Parameterized constructor

// Copy constructor that prints:
// - Copy Constructor Called

// Display values in function.

#include <iostream>
#include <string>
using namespace std;

class SystemConfig {

private: 
    string os;
    double version;

public: 
    SystemConfig(string os, double version) {
        this->os = os;
        this->version = version;
    }

    SystemConfig (const SystemConfig &sys) {
        os = sys.os;
        version = sys.version;
        cout << "Copy Constructor Called" << endl;
    }

    void display() const {
        cout << "OS: " << os << endl;
        cout << "Version: " << version << endl;
    }
};

int main() {
    SystemConfig sys1("Windows", 8.1);
    SystemConfig sys2 = sys1;

    sys1.display();
    cout << endl;
    sys2.display();

    return 0;
}