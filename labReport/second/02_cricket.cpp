/*
    Define a class batsman with the following specifications:
Private members: bcode (4 digits code number), bname (20 characters), innings (integer), notout
(integer), runs (integer), batavg (calculated according to the formula: batavg =runs/[innings-notout]),
– calcavg() Function to compute batavg Public members: readdata() – Function to accept value from bcode, name, innings, notout and invoke
the function and displaydata() – Function to display the data members on the screen.
*/

#include <iostream>
#include <string.h>

using namespace std;

class batsman
{
    int bcode, innings, notout, runs;
    float batavg;
    string bname;

    float calcavg()
    {
        return runs / (innings - notout);
    }

public:
    void readdata()
    {
        cout << "Enter batsman code: ";
        cin >> bcode;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, bname);
        cout << "Enter innings, notout and runs: ";
        cin >> innings >> notout >> runs;
        batavg = calcavg();
    }

    void displaydata()
    {
        cout << "Batsman code: " << bcode << endl;
        cout << "Name: " << bname << endl;
        cout << "Innings, notout and runs: " << innings << ", " << notout << ", " << runs << endl;
        cout << "Batting average: " << batavg << endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
    return 0;
}
