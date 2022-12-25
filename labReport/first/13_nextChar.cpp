// WAP which accepts a character and prints the next character.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Next character: " << char(ch + 1) << endl;
    return 0;
}