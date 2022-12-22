// defining member function outside the class
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    Rectangle(int length, int breadth)
    {
        Length = length;
        Breadth = breadth;
    }
    void showData(){
        cout << "old data" << endl;
    }
};

void Rectangle::showData()
{
    cout << "Dataaa" << endl;
}

int main()
{
    Rectangle rect(1, 2);
    rect.showData();
    return 0;
}