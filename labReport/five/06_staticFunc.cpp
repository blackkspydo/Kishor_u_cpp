//6. Write a program to show the use of static function members.

#include <iostream>
using namespace std;

class Shape
{
private:
    double radius;

public:
    Shape(double r) : radius(r) {}
    static double area(double radius)
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    cout << "Area of circle: " << Shape::area(5) << endl;
    return 0;
}