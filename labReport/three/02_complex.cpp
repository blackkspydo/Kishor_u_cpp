// 2. Write a C++ program to overload binary operator ‘+’ to add two complex numbers.
#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex() : real(0), imaginary(0) {}
    Complex(int r, int i) : real(r), imaginary(i) {}
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void display()
    {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imaginary << endl;
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}