// Write a program which accept principle, rate and time from user and print the simple interest.
#include <iostream>
using namespace std;

int main()
{
    float principal, time, rate;
    float simpleInterest;
    cout << "Enter Principal: " << endl;
    cin >> principal;
    cout << "Enter Time: " << endl;
    cin >> time;
    cout << "Enter Rate: " << endl;
    cin >> rate;
    simpleInterest = (principal * time * rate) / 100;
    cout << "Simple Interest: " << endl
         << simpleInterest << endl;
    return 0;
}