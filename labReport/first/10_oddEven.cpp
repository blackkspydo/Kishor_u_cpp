// Write a program to check whether the given number is even or odd (using ? : ternary operator)
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
    return 0;
}