// Define a class student with the following specification: Private members of class student: admno (integer), sname (20 characters), eng (float), math (float),
// science (float), total (float), ctotal() – a function to calculate eng + math + science with float return
// type.
// Public member function of class student: takedata() – Function to accept values for admno, sname,
// eng, science and invoke ctotal() to calculate total and showdata() – Function to display all the data
// members on the screen.

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int admno;
    char sname[20];
    float eng, math, science, total;

    float ctotal()
    {
        return eng + math + science;
    }

public:
    void takedata()
    {
        cout << "Enter admission number: ";
        cin >> admno;
        fflush(stdin);
        cout << "Enter name: ";
        cin >> sname;
        fflush(stdin);
        cout << "Enter marks in English, Maths and Science: ";
        cin >> eng >> math >> science;
        total = ctotal();
    }

    void showdata()
    {
        cout << endl
             << "Admission number: " << admno << endl;
        cout << "Name: " << sname << endl;
        cout << "Marks in English, Maths and Science: " << eng << ", " << math << ", " << science << endl;
        cout << "Total marks: " << total << endl;
    }
};

int main()
{
    student s;
    s.takedata();
    s.showdata();
    return 0;
}
