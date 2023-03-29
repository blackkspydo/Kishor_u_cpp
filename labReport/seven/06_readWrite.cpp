// 6. Write a program to show the use of write () and read () functions.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("file1.txt");
    fout.write("This is a test", 14);
    fout.close();

    ifstream fin;
    fin.open("file1.txt");
    char ch;
    cout << "Contents of file 1: " << endl;
    while (fin.eof() == 0)
    {
        fin.read(&ch, 1);
        cout << ch;
    }
    fin.close();

    return 0;
}