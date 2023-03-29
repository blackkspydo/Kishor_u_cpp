// 2. Write a program to show the use of class templates.

#include <iostream>
using namespace std;

template <class T>
class greeting
{
    T name;

public:
    greeting(T n)
    {
        name = n;
    }
    void display()
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    greeting<string> g1("John");
    greeting<int> g2(10);
    g1.display();
    g2.display();
    return 0;
}
