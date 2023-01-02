#include <iostream>
using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    Rectangle(int length, int breadth)
    {
        Length = length;
        Breadth = breadth;
    }
    void operator++()
    {
        ++Length;
        ++Breadth;
    }
    void operator+(Rectangle &r)
    {
        Length += r.Length;
        Breadth += r.Breadth;
    }
    friend void operator~(Rectangle &a);

    void display()
    {
        cout << "Length: " << Length << endl;
        cout << "Breadth: " << Breadth << endl;
    }
};

void operator~(Rectangle &r)
{
    --r.Length;
    --r.Breadth;
}


int main()
{
    Rectangle r1(10, 5);
    r1.display();
    ++r1;
    r1.display();
    ~r1;
    r1.display();
    Rectangle r2(5, 10);
    r2.display();
    cout << endl;
    r1 + r2;
    r1.display();
    return 0;
}