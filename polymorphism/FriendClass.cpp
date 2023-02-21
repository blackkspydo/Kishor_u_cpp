// friend class
#include <iostream>
using namespace std;
class Alpha
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    friend class Beta;
};
class Beta
{
public:
    void showAlpha(Alpha a)
    {
        cout << "Alpha::x = " << a.x << endl;
    }
};

int main()
{
    Alpha a;
    a.setData(10);
    Beta b;
    b.showAlpha(a);
    return 0;
}
