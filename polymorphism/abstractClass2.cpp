//fffd
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area() = 0;
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    int area()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *poly1 = &rect;
    Polygon *poly2 = &trgl;
    poly1->set_values(4, 5);
    poly2->set_values(4, 5);
    cout << "Area of Rectangle = " << poly1->area() << endl;
    cout << "Area of Triangle = " << poly2->area() << endl;
    return 0;
}

/* Here is the explanation for the code above:
1. We defined a base class Polygon, with a protected integer variable width and height.
2. In the derived class Rectangle, we defined a public member function area() which returns the area of the rectangle.
3. In the derived class Triangle, we defined a public member function area() which returns the area of the triangle.
4. We defined two pointers of type Polygon, which point to a Rectangle and a Triangle object respectively.
5. We then call the member function set_values() of the base class Polygon using the derived class objects. 
6. We then call the member function area() of the base class Polygon using the derived class objects. */