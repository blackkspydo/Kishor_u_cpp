#include <iostream>
using namespace std;

class Marks
{
private:
    int _sub1, _sub2;

public:
    Marks()
    {
        _sub1 = 0;
        _sub2 = 0;
    };
    Marks(int sub1, int sub2)
    {
        _sub1 = sub1;
        _sub2 = sub2;
    }
    void operator=(Marks &m)
    {
        _sub1 = m._sub1;
        _sub2 = m._sub2;
    }
    void display()
    {
        cout << "Subject 1: " << _sub1 << endl;
        cout << "Subject 2: " << _sub2 << endl;
    }
};

int main()
{
    Marks m1(10, 20);
    Marks m2;
    m2 = m1;
    m1.display();
    cout << endl;
    m2.display();
    return 0;
}