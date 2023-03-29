// 1. Write a C++ program to overload both unary operators (i.e. increment and decrement).

#include <iostream>
using namespace std;

class Counter
{
private:
    int count;

public:
    Counter()
    {
        count = 0;
    }
    Counter(int c)
    {
        count = c;
    }
    void operator++()
    {
        ++count;
    }
    void operator--()
    {
        --count;
    }
    void display()
    {
        cout << "Count: " << count << endl;
    }
};

int main()
{
    Counter c1(10);
    c1.display();
    ++c1;
    c1.display();
    --c1;
    c1.display();
    return 0;
}