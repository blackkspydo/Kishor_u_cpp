#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    Rectangle (Rectangle &&r){
            
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    ~Rectangle();
};

int main()
{
    Rectangle r1(10, 5);
    cout << "first co" << endl;
    Rectangle r2(r1);
    cout << "Second co" << endl;

    cout << "Area of r1: " << r1.area() << endl;

    cout << "Area of r2: " << r2.area() << endl;

    return 0;
}