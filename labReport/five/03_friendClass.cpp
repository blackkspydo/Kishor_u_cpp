//3. Write a program to show the use of friend function and friend class.
#include <iostream>
using namespace std;

class Shape
{
private:
    double radius;

public:
    Shape(double r) : radius(r) {}
    friend class Circle;
};

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area(Shape s)
    {
        return 3.14159 * s.radius * s.radius;
    }
};

int main()
{
    Shape shape(5);
    Circle circle(5);
    cout << "Area of circle: " << circle.area(shape) << endl;
    return 0;
}