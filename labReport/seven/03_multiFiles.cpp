// 3. Write a program working with multiple files in a single program.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("file1.txt");
    fout << "This is file 1" << endl;
    fout.close();

    fout.open("file2.txt");
    fout << "This is file 2" << endl;
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

    fin.open("file2.txt");
    cout << "Contents of file 2: " << endl;
    while (fin.eof() == 0)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();

    return 0;
}
