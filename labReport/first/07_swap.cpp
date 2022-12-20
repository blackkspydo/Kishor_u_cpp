// Write a program to swap the values of two variables.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Before Swap"
         << " " << num1 << " " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swap"
         << " " << num1 << " " << num2 << endl;
    return 0;
}