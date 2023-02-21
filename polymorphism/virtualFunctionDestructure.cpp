#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base destroyed" << endl;
    }
};
class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived destroyed" << endl;
    }
};

int main()
{

    Base *b = new Derived();
    delete b;
    return 0;
}