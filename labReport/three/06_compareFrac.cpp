// Create a class Fraction to represent a fraction of the type 2/5. Overload the 4 arithmetic operators and = = to compare two fraction objects.

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}
    Fraction operator+(Fraction f)
    {
        int n = numerator * f.denominator + denominator * f.numerator;
        int d = denominator * f.denominator;
        return Fraction(n, d);
    }
    Fraction operator-(Fraction f)
    {
        int n = numerator * f.denominator - denominator * f.numerator;
        int d = denominator * f.denominator;
        return Fraction(n, d);
    }
    Fraction operator*(Fraction f)
    {
        int n = numerator * f.numerator;
        int d = denominator * f.denominator;
        return Fraction(n, d);
    }
    Fraction operator/(Fraction f)
    {
        int n = numerator * f.denominator;
        int d = denominator * f.numerator;
        return Fraction(n, d);
    }
    bool operator==(Fraction f)
    {
        return numerator * f.denominator == denominator * f.numerator;
    }
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1(2, 5);
    Fraction f2(3, 5);
    Fraction f3 = f1 + f2;
    f3.display();
    Fraction f4 = f1 - f2;
    f4.display();
    Fraction f5 = f1 * f2;
    f5.display();
    Fraction f6 = f1 / f2;
    f6.display();
    if (f1 == f2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
    return 0;
}
