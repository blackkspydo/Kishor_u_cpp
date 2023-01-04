// Define a class TEST in C++ with following description:
// Private Members: TestCode (of type integer), Description (of type string), NoCandidate (of type
// integer), CenterReqd (of type integer), a member function CALCNTR() to calculate and return the
// number of centers as (NoCandidates/100+1)
// Public Members: A function SCHEDULE) to allow user to enter values for TestCode, Description,
// NoCandidate & call function CALCNTR() to calculate the number of Centres
// A function DISPTEST() to allow user to view the content of all the data members

#include <iostream>

using namespace std;

class TEST
{
    int TestCode, NoCandidate, CenterReqd;
    string Description;

    int CALCNTR()
    {
        return NoCandidate / 100 + 1;
    }

public:
    void SCHEDULE()
    {
        cout << "Enter Test Code: ";
        cin >> TestCode;
        cin.ignore();
        cout << "Enter Description: ";
        getline(cin, Description);
        cin.ignore();
        cout << "Enter number of candidates: ";
        cin >> NoCandidate;
        CenterReqd = CALCNTR();
    }

    void DISPTEST()
    {
        cout << "Test Code: " << TestCode << endl;
        cout << "Description: " << Description << endl;
        cout << "Number of candidates: " << NoCandidate << endl;
        cout << "Number of centers required: " << CenterReqd << endl;
    }
};

int main()
{
    TEST t;
    t.SCHEDULE();
    t.DISPTEST();
    return 0;
}
