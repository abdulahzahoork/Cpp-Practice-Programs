// C++ program to make the file
// in read-only mode using ifstream

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char *fileName ("renamed_file.txt");

    ifstream fin (fileName);

    if (fin.is_open()) {
        cout << "File '" << fileName << "' is now open in read-only mode." << endl;
        fin.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}