#include <iostream>
using namespace std;
// make person class wit name and age attributes
class Person
{
private:
    string _name;
    int _age;
public:
    Person(string name, int age)
    {
        _name = name;
        _age = age;
    }
    void display()
    {
        cout << _name << " is " << _age << " years old." << endl;
    }
    void add(Person p1, Person p2)
    {
        _name = p1._name + " " + p2._name;
        _age = p1._age + p2._age;
    }
    Person addInstance(Person p1)
    {
        Person p3(" ", 0);
        p3._name = _name + " " + p1._name;
        p3._age = _age + p1._age;
        return p3;
    }
};
int main()
{

return 0;
}