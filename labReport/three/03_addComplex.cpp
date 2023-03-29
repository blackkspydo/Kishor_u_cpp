// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    friend Complex operator+(Complex c1, Complex c2);
    void display()
    {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imaginary << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp(0, 0);
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main()
{
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}