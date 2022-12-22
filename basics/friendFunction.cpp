// and example of friend function
#include <iostream>
using namespace std;

class Sample
{
private:
    int a;
    int b;
    friend void display(Sample s);

public:
    Sample(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    inline int getA()
    {
        return a;
    }

    inline int getB()
    {
        return b;
    }
};

void display(Sample s)
{
    cout << "a: " << s.a << endl;
    cout << "b: " << s.b << endl;
}

int main()
{
    Sample s(10, 20);
    Sample s1(30, 40);
    display(s);
    cout << s.getA() << endl;
    cout << s.getB() << endl;
    cout << s1.getA() << endl;
    cout << s1.getB() << endl;

    return 0;
}
