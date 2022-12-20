#include <iostream>
using namespace std;

class Rectangle
{
private:
    float Length;
    float Breadth;

public:
    Rectangle(float length, float breadth)
    {
        Length = length;
        Breadth = breadth;
    }

    float getArea()
    {
        return Length * Breadth;
    }

    float getPerimeter()
    {
        return 2 * (Length + Breadth);
    }
};

int main()
{
    float length, breadth;
    cout << "Enter Length" << endl;
    cin >> length;
    cout << "Enter Breadth" << endl;
    cin >> breadth;
    Rectangle r1(length, breadth);
    cout << "Area of Rectangle " << r1.getArea() << endl;
    cout << "Perimeter of Rectangle " << r1.getPerimeter() << endl;
    return 0;
}