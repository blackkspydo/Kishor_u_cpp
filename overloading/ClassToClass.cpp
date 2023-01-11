// Class to class constructors

#include <iostream>
using namespace std;

class Inventory
{
private:
    int _itemNumber;
    int _quantity;
    double _cost;

public:
    Inventory()
    {
        _itemNumber = 0;
        _quantity = 0;
        _cost = 0.0;
    }
    Inventory(int itemNumber, int quantity, double cost)
    {
        _itemNumber = itemNumber;
        _quantity = quantity;
        _cost = cost;
    }
    int getItemNumber()
    {
        return _itemNumber;
    }
    int getQuantity()
    {
        return _quantity;
    }
    double getCost()
    {
        return _cost;
    }
    void setItemNumber(int itemNumber)
    {
        _itemNumber = itemNumber;
    }
    void setQuantity(int quantity)
    {
        _quantity = quantity;
    }
    void setCost(double cost)
    {
        _cost = cost;
    }
};

class Invoice
{
private:
    int _itemNumber;
    double _amount;

public:
    Invoice()
    {
        _itemNumber = 0;
        _amount = 0;
    }
    void operator=(Inventory &inv)
    {
        _itemNumber = inv.getItemNumber();
        _amount = double(inv.getQuantity()) * inv.getCost();
    }
    void display()
    {
        cout << "Item Number: " << _itemNumber << endl;
        cout << "Amount: " << _amount << endl;
    }
};

int main()
{
    Inventory inv = {100, 10, 100.2222};
    Invoice invoice;
    invoice = inv;
    invoice.display();
    return 0;
}