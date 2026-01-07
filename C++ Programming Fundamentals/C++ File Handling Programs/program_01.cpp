// C++ Program to Create a File

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     // Create an output file stream
//     ofstream fout("example.txt");

//     // Check if the file is open
//     if (fout.is_open()) {
//         // Write to the file
//         fout << "Hello, World!" << endl;
//         fout << "This is a sample file." << endl;

//         // Close the file
//         fout.close();
//         cout << "File created and data written successfully." << endl;
//     } else {
//         cout << "Error opening file." << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout ("something.txt");

    if (fout.is_open()) {
        fout << "Hello, World!" << endl;
        fout << "This is my first file handling program." << endl;
        fout << "Bye, World!" << endl;
        fout.close();
        cout << "File created and data stored successfully." << endl;
    } else {
        cout << "Error opening file" << endl;
    }
    return 0;
}