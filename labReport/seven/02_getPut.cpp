// 2. Write a program to show the use of get () and put () functions.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "You entered: ";
    cout.put(ch);
    cout << endl;
    return 0;
}