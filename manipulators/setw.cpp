#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num = 2.714234;
    cout << "Number = " << num << endl;
    cout << setprecision(0) << num << endl;
    return 0;
}