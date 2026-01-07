// Rename file in C++ Program using rename() function

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    const char *oldName = "renamed_file.txt";
    const char *newName = "file1.txt";

    if (rename(oldName, newName)==0) {
        cout << "File named successfully from " << oldName << " to " << newName << endl;
    } else {
        perror ("Error renaming file"); 
    }
    return 0;
}