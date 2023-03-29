//7. Write a program to show the use of “this” pointer.


#include <iostream>
using namespace std;

class Shape
{
private:
    double radius;

public:
    Shape(double r) : radius(r) {}
    double area()
    {
        return 3.14159 * this->radius * this->radius;
    }
};

int main()
{
    Shape shape(5);
    cout << "Area of circle: " << shape.area() << endl;
    return 0;
}