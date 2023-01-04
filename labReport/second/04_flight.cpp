// Define a class in C++ with following description:
// Private Members: A data member Flight number of type integer, A data member Destination of type
// string, A data member Distance of type float, A data member Fuel of type float, A member function
// CALFUEL)() to calculate the value of Fuel as per the following criteria
// Distance     Fuel
// <=1000       500
// more than 1000 and <=2000    1100
// more than 2000      2200
// Public Members: A function FEEDINFO() to allow user to enter values for Flight Number,
// Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel and A function
// SHOWINFO() to allow user to view the content of all the data members.

#include <iostream>

using namespace std;

class Flight
{
    int FlightNumber;
    string Destination;
    float Distance, Fuel;

    float CALFUEL()
    {
        if (Distance <= 1000)
            return 500;
        else if (Distance <= 2000)
            return 1100;
        else
            return 2200;
    }

public:
    void FEEDINFO()
    {
        cout << "Enter flight number: ";
        cin >> FlightNumber;
        cin.ignore();
        cout << "Enter destination: ";
        cin >> Destination;
        cout << "Enter distance: ";
        cin >> Distance;
        Fuel = CALFUEL();
    }

    void SHOWINFO()
    {
        cout << "Flight number: " << FlightNumber << endl;
        cout << "Destination: " << Destination << endl;
        cout << "Distance: " << Distance << endl;
        cout << "Fuel: " << Fuel << endl;
    }
};

int main()
{
    Flight f;
    f.FEEDINFO();
    f.SHOWINFO();
    return 0;
}
