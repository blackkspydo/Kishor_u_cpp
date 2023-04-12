#include <iostream>
using namespace std;

// constructor and destructor types

class bar
{
private:
    int _x, _y;

public:
    bar()
    {
        cout << "bar constructor" << endl;
    }

    bar(int x, int y)
    {
        cout << "parameterized constructor" << endl;
        _x = x;
        _y = y;
    }

    bar(bar &b)
    {
        cout << "bar copy constructor" << endl;
    }

    ~bar()
    {
        cout << "bar destructor" << endl;
    }
};

int main()
{
    bar b;

    return 0;
}