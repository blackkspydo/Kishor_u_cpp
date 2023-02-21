// multiple inheritance in cpp
#include <iostream>
using namespace std;

// first class
class A
{
    int foo;

public:
    A()
    {
        cout << "This is first class" << endl;
    }
    ~A()
    {
        cout << "This is first class destructor" << endl;
    }
};

class B
{
    int bar;

public:
    B()
    {
        cout << "This is second class" << endl;
    }
    ~B()
    {
        cout << "This is second class destructor" << endl;
    }
};

class C : public A, public B
{
    int ligma;

public:
    C()
    {
        cout << "This is third class" << endl;
    }
    ~C()
    {
        cout << "This is third class destructor" << endl;
    }
};

int main()
{
    C c1;
    return 0;
}