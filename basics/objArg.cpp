// passing objects as arguments to functions
#include <iostream>
using namespace std;

class Height
{
private:
    int _feet;
    int _inches;

public:
    Height(int feet, int inches)
    {
        _feet = feet;
        _inches = inches;
    }
    void display()
    {
        cout << _feet << " feet " << _inches << " inches" << endl;
    }
    void add(Height h1, Height h2)
    {
        _inches = h1._inches + h2._inches;
        _feet = h1._feet + h2._feet + (_inches / 12);
        _inches = _inches % 12;
    }
    Height addInstance(Height h1)
    {
        Height h3(0, 0);
        h3._inches = _inches + h1._inches;
        h3._feet = _feet + h1._feet + (h3._inches / 12);
        h3._inches = h3._inches % 12;
        return h3;
        }
};

int main()
{
    Height h1(5, 11), h2(6, 1), h3(0, 0);
    cout << "h1 = ";
    h1.display();
    cout << "h2 = ";
    h2.display();
    h3.add(h1, h2);
    cout << "h3 = ";
    h3.display();
    h3 = h3.addInstance(h1);
    cout << "h3 = ";
    h3.display();
    return 0;
}