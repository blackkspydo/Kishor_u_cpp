// Write a program which accepts a character and display its ASCII value.
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter a character: " << endl;
    cin >> character;
    cout << "ASCII value of " << character << " is " << int(character) << endl;
    return 0;
}