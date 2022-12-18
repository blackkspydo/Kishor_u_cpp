// Write a program which accept two numbers and print their sum.
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter any two numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "Sum = " << sum(num1, num2) << endl;
    return 0;
}