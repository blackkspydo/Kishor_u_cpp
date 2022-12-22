//  copy constructor in cpp

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle()
    {
        cout << "Con" << endl;
    }
    Rectangle(Rectangle &r)
    {
        cout << "Copy Con" << endl;
    }
    ~Rectangle()
    {
        cout << "Des" << endl;
    }
};

int main()
{
    Rectangle r1;
    cout << "first co" << endl;
    Rectangle r2(r1);
    cout << "Second co" << endl;
    return 0;
}
