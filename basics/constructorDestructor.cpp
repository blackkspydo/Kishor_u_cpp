#include <iostream>
using namespace std;

class Rectangle{
    public:
    Rectangle(){
        cout << "Con" << endl;
    }
    ~Rectangle(){
        cout << "Des" << endl;
    }
};

int main()
{
    Rectangle r1;
    cout << "first co" << endl;
    cout << "Second co" << endl;
return 0;
}