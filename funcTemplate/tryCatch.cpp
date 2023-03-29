#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    a = 3;
    b = 0;
    try
    {
        // if (b == 0)
        //     throw "Division by zero condition!";
        cout << a / b << endl;
    }
    catch (...)
    {
        cerr << "Error: Division by zero condition!" << endl;
    }
    cout << "I ran" << endl;
    return 0;
}