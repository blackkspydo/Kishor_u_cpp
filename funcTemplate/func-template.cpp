// function template example
#include <iostream>
using namespace std;



// The sum function adds two values of the same type and returns the result
template <class T>
T sum(T a, T b)
{
    return a + b;
}




int main()
{
    int a = 10, b = 20;
    float c = 10.5, d = 20.5, foot;
    int foo;
    foo = sum<int>(a, b);
    cout << "sum of " << a << " and " << b << " is " << foo << endl;
    foot = sum<float>(c, d);
    cout << "sum of " << c << " and " << d << " is " << foot << endl;
    return 0;
}
