// 3. Write a program to show the use of exception handling (try, throw, & catch).

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
    return 0;
}