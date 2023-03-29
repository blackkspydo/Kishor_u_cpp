//4. Write a program to append some contents in existing file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("file1.txt", ios::app);
    fout << "This is appended text" << endl;
    fout.close();

    ifstream fin;
    fin.open("file1.txt");
    char ch;
    cout << "Contents of file 1: " << endl;
    while (fin.eof() == 0)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();

    return 0;
}