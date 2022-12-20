// Write a program which accept temperature in Fahrenheit and print it in centigrade.
#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, centigrade;
    cout << "Enter temperature in Fahrenheit" << endl;
    cin >> fahrenheit;
    centigrade = ((fahrenheit - 32) * 5) / 9;
    cout << centigrade << "C = " << fahrenheit << " F" << endl;
    return 0;
}