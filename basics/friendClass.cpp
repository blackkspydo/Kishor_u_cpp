// friend class

// This code creates a class called Sample with two private integer variables called a and b. It has a constructor that initializes a and b with the values passed in. It also has a function called display that prints out the values of a and b.


// friend class
#include <iostream>
using namespace std;

class Sample
{
private:
    int a;
    int b;

public:
    Sample(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "Sample constructor called" << endl;
    }
    void display();
};

void Sample::display()
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "Sample::display() called" << endl;
}

int main()
{
    Sample s(10, 20);
    s.display();
    return 0;
}
