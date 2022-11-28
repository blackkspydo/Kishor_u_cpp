#include <iostream>

using namespace std;
enum DAYS
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main()
{
    DAYS day = sunday;

    cout << "First day of the week is " << tuesday << endl;
    return 0;
}