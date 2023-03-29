//7. Write a program to copy contents from one file to another file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string source_file_name = "file1.txt";
    string destination_file_name = "file2.txt";

    ifstream source_file(source_file_name, ios::binary);
    ofstream destination_file(destination_file_name, ios::binary);

    if (!source_file.is_open()) {
        cerr << "Unable to open the source file: " << source_file_name << endl;
        return 1;
    }

    if (!destination_file.is_open()) {
        cerr << "Unable to open the destination file: " << destination_file_name << endl;
        source_file.close();
        return 1;
    }

    // Copy the contents of the source file to the destination file
    char buffer;
    while (source_file.get(buffer)) {
        destination_file.put(buffer);
    }

    cout << "Contents copied from " << source_file_name << " to " << destination_file_name << endl;

    source_file.close();
    destination_file.close();
    return 0;
}
