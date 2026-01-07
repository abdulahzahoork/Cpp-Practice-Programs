// C++ Program to demonstrate
// copying the content of a .txt file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char *sourceFile = "something.txt";
    const char *destinationFile = "copied_file.txt";

    ifstream src(sourceFile, ios::binary);
    ofstream dest(destinationFile, ios::binary);

    if (!src) {
        cout << "Error opening source file: " << sourceFile << endl;
        return 1;
    }

    if (!dest) {
        cout << "Error creating destination file: " << destinationFile << endl;
        return 1;
    }

    dest << src.rdbuf();

    src.close();
    dest.close();

    cout << "File copied successfully from " << sourceFile << " to " << destinationFile << endl;

    return 0;
}