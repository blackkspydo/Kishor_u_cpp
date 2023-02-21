// abstract class example
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print() = 0;
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived::print()" << endl;
    }
};
class Derived2 : public Base
{
public:
    void print()
    {
        cout << "Derived2::print()" << endl;
    }
};

int main()
{
    Base *b = new Derived();

    b->print();
    b = new Derived2();
    b->print();
    return 0;
}
