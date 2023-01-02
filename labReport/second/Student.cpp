// Define a class student with the following specification: Private members of class student: admno (integer), sname (20 characters), eng (float), math (float), science (float), total (float), ctotal() – a function to calculate eng + math + science with float return type.
// Public member function of class student: takedata() – Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate total and showdata() – Function to display all the data members on the screen.

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Student
{
private:
    int _admitNo;
    string _studentName;
    float _eng, _math, _science, _total;
    float _calculateTotal()
    {
        return _total;
    }

public:
    void takeData()
    {
        cout << "Enter Admit Number" << endl;
        cin >> _admitNo;
        fflush(stdin);
        cout << "Enter Name" << endl;
        getline(cin, _studentName);
        cout << "Enter English, Science and Mathematics Marks respectively" << endl;
        fflush(stdin);
        cin >> _eng >> _science >> _math;
        _total = _eng + _math + _science;
    }
    void showData()
    {
        cout << "Admit Number" << setw(5) << _admitNo << endl;
        cout << "Name" << setw(21) << _studentName << endl;
        cout << "Subject" << setw(10) << "Marks" << endl;
        cout << "English" << setw(10) << _eng << endl;
        cout << "Science" << setw(10) << _science << endl;
        cout << "Math" << setw(13) << _math << endl;
        cout << "-----------------------" << endl;
        cout << "Total" << setw(12) << _calculateTotal() << endl;
    }
};

int main()
{
    Student s1;
    s1.takeData();
    s1.showData();
    return 0;
}