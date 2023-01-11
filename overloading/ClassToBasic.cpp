// Class to basic type conversion
#include <iostream>
using namespace std;

class Time
{
private:
    int _hours;
    int _minutes;
    int _seconds;

public:
    Time()
    {
        _hours = 0;
        _minutes = 0;
        _seconds = 0;
    }
    Time(int hours, int minutes, int seconds)
    {
        _hours = hours;
        _minutes = minutes;
        _seconds = seconds;
    }
    operator int()
    {
        return _hours * 60 + _minutes;
    }
    operator string()
    {
        return "Hello";
    }
    void display()
    {
        cout << "Hours: " << _hours << endl;
        cout << "Minutes: " << _minutes << endl;
        cout << "Seconds: " << _seconds << endl;
    }
};

int main()
{
    Time t1 = {10, 20, 30};
    t1.display();
    cout << endl;
    int minutes = t1;
    string s = t1;
    cout << "String: " << s << endl;
    cout << "Minutes: " << minutes << endl;
    return 0;
}