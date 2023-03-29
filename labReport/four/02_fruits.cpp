// Make a class named Fruit with a data member to calculate the number of fruits in a basket. Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the basket.

#include <iostream>
using namespace std;

class Fruit
{
protected:
    int totalFruits;

public:
    Fruit() : totalFruits(0) {}
};

class Apples : public Fruit
{
public:
    void addApples(int num)
    {
        totalFruits += num;
    }

    int getApples() const
    {
        return totalFruits;
    }
};

class Mangoes : public Fruit
{
public:
    void addMangoes(int num)
    {
        totalFruits += num;
    }

    int getMangoes() const
    {
        return totalFruits;
    }
};

int main()
{
    Apples apples;
    Mangoes mangoes;

    apples.addApples(10);
    mangoes.addMangoes(20);

    cout << "Apples: " << apples.getApples() << endl;
    cout << "Mangoes: " << mangoes.getMangoes() << endl;
    cout << "Total fruits: " << apples.getApples() + mangoes.getMangoes() << endl;

    return 0;
}
