// Write a program to calculate area of circle.
#include <iostream>
#include <cmath>

using namespace std;
float PI = 3.14;
int main()
{
    float radius;
    float area;
    cout << "Enter Radius of Circle: " << endl;
    cin >> radius;
    area = PI * pow(radius, 2);
    cout << "Area=" << area << endl;
    return 0;
}