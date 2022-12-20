// Write a program to check whether the given number is positive or negative (using ? : ternary operator)
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    cout << (num > 0 ? "Positive" : "Negative") << endl;
    return 0;
}