#include <iostream>
using namespace std;
// virtual function exampla
class Base
{
public:
    virtual void print()
    {
        cout << "Base::print()" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived::print()" << endl;
    }
};

int main()
{
    Base *b = new Base();
    b->print();
    Derived *d = new Derived();
    d->print();
    b = d;
    b->print();
    return 0;
}
