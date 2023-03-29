// 4. Write a program to show the use of multiple catch statements.

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
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (...)
    {
        cout << "Something went wrong" << endl;
    }
    return 0;
}