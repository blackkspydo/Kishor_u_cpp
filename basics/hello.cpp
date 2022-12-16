#include <iostream>

using namespace std;

class Person{
    private: 
    string Name;
    string Address;
    long int PhoneNumber;
    public:
    Person(string name, string address, long int phoneNumber){
        Name = name;
        Address = address;
        PhoneNumber = phoneNumber;
    }
    string getName(){
        return Name;
    }


}

int main(){
    
}