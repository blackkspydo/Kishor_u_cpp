// constructor overloading
#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    float balance;

public:
    Account(int accNo, float balance)
    {
        this->accNo = accNo;
        this->balance = balance;
    }
    Account(int accNo)
    {
        this->accNo = accNo;
        this->balance = 0;
    }
    Account()
    {
        this->accNo = 0;
        this->balance = 0;
    }
    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account acc1;
    Account acc2(1234, 5000);
    Account acc3(1234);
    cout << endl<<"Account Info: "<<endl;
    acc1.display();
    acc2.display();
    acc3.display();
    return 0;
}