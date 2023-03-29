// 1. Write a program to write and read text in file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("file.txt");
    fout << "Hello World" << endl;
    fout.close();

    ifstream fin;
    fin.open("file.txt");
    string str;
    while (fin >> str)
    {
        cout << str << endl;
    }
    fin.close();
    return 0;
}