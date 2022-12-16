#include <iostream>
#include <array>
using namespace std;

int mul(int a, int b)
{
    return a * b;
}
int mul(int a, int b, int c)
{
    return a * b * c;
}
int mul(int a[], int size)
{
    int mul = 1;
    for (int i; i <= size; i++)
    {
        mul *= a[i];
    }
    return mul;
}

int main()
{
    int arr[] = {
        1,
        2,
        34,
        5,
        6,
    };
    int *p = arr;
    cout << mul(1, 2) << endl;
    cout << mul(1, 2, 3) << endl;
    cout << mul(p, 3) << endl;

    return 0;
}