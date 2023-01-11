// concatenate using
#include <iostream>
#include <string>

using namespace std;

class String
{
    string _name;

public:
    void setData(string name)
    {
        _name = name;
    }

    void display()
    {
        cout << _name << endl;
    }

    String operator+(String s)
    {
        String temp;
        temp._name = _name + " " + s._name;
        return temp;
    }
};

int main()
{
    String s1, s2;
    s1.setData("Hello");
    s2.setData("World");
    s1.display();
    s2.display();
    String s3 = s1 + s2;
    s3.display();
    return 0;
}