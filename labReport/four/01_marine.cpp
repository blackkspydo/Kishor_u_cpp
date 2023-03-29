//  Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
// a. function of Mammals by the object of Mammal
// b. function of MarineAnimal by the object of MarineAnimal c. function of BlueWhale by the object of BlueWhale
// d. function of each of its parent by the object of BlueWhale

#include <iostream>
using namespace std;

class Mammals
{
public:
    void displayMammal()
    {
        cout << "I am a mammal." << endl;
    }
};

class MarineAnimals
{
public:
    void displayMarineAnimal()
    {
        cout << "I am a marine animal." << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void displayBoth()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
    }
};

int main()
{
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;

    mammal.displayMammal();
    marineAnimal.displayMarineAnimal();
    blueWhale.displayBoth();
    blueWhale.displayMammal();
    blueWhale.displayMarineAnimal();

    return 0;
}
