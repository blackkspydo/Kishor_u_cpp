// 1. Write a program to show the use of function templates.

#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 20;
    cout << "Sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    return 0;
}