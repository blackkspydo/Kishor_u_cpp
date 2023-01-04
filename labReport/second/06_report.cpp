// Define a class REPORT with the following specification:
// Private members: adno (4 digits admission number), name (20 characters), marks (an array of 5
// floating point values), average (average marks obtained), GETAVG() (a function to compute the
// average obtained in five subject)

// Public members: READINFO() — function to accept values for adno, name, marks. Invoke the
// function GETAVG() and DISPLAYINFO() — function to display all data members of report on the

// screen. You should give function definitions.

#include <iostream>
#include <string.h>

using namespace std;

class report
{
    int adno;
    string name;
    float marks[5];
    float average;

    float getavg()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum / 5;
    }

public:
    void readinfo()
    {
        cout << "Enter admission number: ";
        cin >> adno;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        average = getavg();
    }

    void displayinfo()
    {
        cout << "Admission number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << ", ";
        }
        cout << endl;
        cout << "Average marks: " << average << endl;
    }
};

int main()
{
    report r;
    r.readinfo();
    r.displayinfo();
    return 0;
}