// 5. Write a program to show the use of abstract class and concrete class.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Circle circle(5);
    cout << "Area of circle: " << circle.area() << endl;

    return 0;
}
