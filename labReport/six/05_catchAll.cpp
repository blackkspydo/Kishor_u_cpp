//5. Write a program to catch all the exception.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw "Division by zero is not possible";
        else
            cout << "Division of " << a << " by " << b << " is " << a / b << endl;
    }
    catch (...)
    {
        cout << "Something went wrong" << endl;
    }
    return 0;
}