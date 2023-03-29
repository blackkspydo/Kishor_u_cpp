//5. Write a program to show the use of seekg() function.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string file_name = "file1.txt";
    ifstream input_file(file_name);

    if (!input_file.is_open()) {
        cerr << "Unable to open the file: " << file_name << endl;
        return 1;
    }
    string line;
    getline(input_file, line);
    cout << "First line: " << line << endl;
    input_file.seekg(0, ios::beg);
    getline(input_file, line);
    cout << "After using seekg(), first line again: " << line << endl;
    input_file.seekg(5, ios::beg);
    getline(input_file, line);
    cout << "Line from the 5th character: " << line << endl;
    input_file.close();
    return 0;
}
