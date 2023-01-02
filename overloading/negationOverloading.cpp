// Overloading of unary operator (-) Negation Operator

#include <iostream>
using namespace std;

class Point
{
private:
    int _x;
    int _y;

public:
    void setData(int x, int y)
    {
        _x = x;
        _y = y;
    }

    // overloadings

    Point operator-()
    {
        Point p;
        p.setData(-_x, -_y);
        return p;
    }

    void display()
    {
        cout << "x = " << _x << "y = " << _y << endl;
    }
};

int main()
{
    Point p1, p2;
    p1.setData(2, 3);
    cout << "Before" << endl;
    p1.display();
    cout << "After" << endl;
    p2 = -p1;
    p2.display();
    return 0;
}