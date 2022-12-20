#include <iostream>

using namespace std;

class Person
{
private:
    string Name;
    string Address;
    string PhoneNumber;

public:
    Person(string name, string address, string phoneNumber)
    {
        Name = name;
        Address = address;
        PhoneNumber = phoneNumber;
    }
    string getName()
    {
        this->Name;
    }
    void setName(string name)
    {
        this->Name = name;
    }
};

int main()
{
    Person p1("Miraj", "Kalimati", "99999999");
    cout << p1.getName() << endl;
    return 0;
}