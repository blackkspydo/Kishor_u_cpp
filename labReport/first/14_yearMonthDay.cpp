// WAP to accept days and print the number of years, months and days in the given number of days.

#include <iostream>
using namespace std;

int main()
{
    int days;
    cout << "Enter days: ";
    cin >> days;
    cout << "Years: " << days / 365 << endl;
    days %= 365;
    cout << "Months: " << days / 30 << endl;
    days %= 30;
    cout << "Days: " << days << endl;
    return 0;
}
