// C++ Program to Read Content From One File and Write it Into Another File

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin ("file1.txt");
    ofstream fout ("file2.txt");

    while (!fin.eof()) {
        string line;
        getline (fin, line);
        fout << line << endl;
    }
    fin.close();
    fout.close();
    cout << "Data copied from file1.txt and pasted into file2.txt successfully." << endl;
    return 0;
}