// WAP to accept an integer and print the number of 500,100,50,20,10,5,1 notes in the given amount.

#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "500 notes: " << amount / 500 << endl;
    amount %= 500;
    cout << "100 notes: " << amount / 100 << endl;
    amount %= 100;
    cout << "50 notes: " << amount / 50 << endl;
    amount %= 50;
    cout << "20 notes: " << amount / 20 << endl;
    amount %= 20;
    cout << "10 notes: " << amount / 10 << endl;
    amount %= 10;
    cout << "5 notes: " << amount / 5 << endl;
    amount %= 5;
    cout << "1 notes: " << amount << endl;
    return 0;
}