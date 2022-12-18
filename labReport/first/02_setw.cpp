// Write a program to display the following output using a single cout statement.
// Subject Marks
// Mathematics 90
// Computer    77
// Chemistry   69

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Subject Marks" << endl
         << "Mathematics " << setw(3) << 90 << endl
         << "Computer " << setw(6) << 77 << endl
         << "Chemistry " << setw(5) << 69 << endl;
    return 0;
}
