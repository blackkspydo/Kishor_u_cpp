// Basic to class type conversion
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
    Time(int minutes);
    void display()
    {
        cout << "Hours: " << _hours << endl;
        cout << "Minutes: " << _minutes << endl;
        cout << "Seconds: " << _seconds << endl;
    }
};

Time::Time(int minutes)
{
    _hours = minutes / 60;
    _minutes = minutes % 60;
    _seconds = 0;
}

int main()
{
    Time t1 = {10, 20, 30};
    t1.display();
    cout << endl;
    Time t2 = 100;
    t2.display();
    return 0;
}