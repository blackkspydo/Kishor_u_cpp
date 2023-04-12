#include <iostream>
using namespace std;

class foo
{
private:
    int _x;

public:
    foo(int x)
    {
        _x = x;
    }

    // operator overloading
    foo operator-(const foo &g)
    {
        foo temp(0);
        temp._x = _x - g._x;
        return temp;
    }
    // increment operator overloading
    foo operator++()
    {
        foo temp(0);
        temp._x = _x + 1;
        return temp;
    }

    // as friend function
    friend foo operator/(const foo &f, const foo &g);
    friend foo operator--(foo &f);
};

// as friend function

foo operator/(const foo &f, const foo &g)
{
    foo temp(0);
    temp._x = f._x / g._x;
    return temp;
}

foo operator--(foo &f)
{
    foo temp(0);
    temp._x = f._x - 1;
    return temp;
}

int main()
{
    foo f = 10;
    foo g(20);
    foo h = f - g;
    return 0;
}