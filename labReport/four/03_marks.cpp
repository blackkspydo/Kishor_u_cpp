// We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.

#include <iostream>
#include <string>
using namespace std;

class Marks
{
protected:
    int roll_number;
    int marks;

public:
    string name;
    static int count;
    Marks()
    {
        roll_number = ++count;
    }
};

int Marks::count = 0;

class Physics : public Marks
{
public:
    void setPhysicsMarks(int m, string n)
    {
        marks = m;
        name = n;
    }

    int getPhysicsMarks()
    {
        return marks;
    }
};

class Chemistry : public Marks
{
public:
    void setChemistryMarks(int m)
    {
        marks = m;
    }

    int getChemistryMarks()
    {
        return marks;
    }
};

class Mathematics : public Marks
{
public:
    void setMathematicsMarks(int m)
    {
        marks = m;
    }

    int getMathematicsMarks()
    {
        return marks;
    }
};

int main()
{
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    Physics p[num_students];
    Chemistry c[num_students];
    Mathematics m[num_students];

    for (int i = 0; i < num_students; i++)
    {
        string name;
        int physics_marks, chemistry_marks, math_marks;
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> name;
        cout << "Enter Physics marks: ";
        cin >> physics_marks;
        cout << "Enter Chemistry marks: ";
        cin >> chemistry_marks;
        cout << "Enter Mathematics marks: ";
        cin >> math_marks;

        p[i].setPhysicsMarks(physics_marks, name);
        c[i].setChemistryMarks(chemistry_marks);
        m[i].setMathematicsMarks(math_marks);
    }

    int total_class_marks = 0;

    for (int i = 0; i < num_students; i++)
    {
        int total_student_marks = p[i].getPhysicsMarks() + c[i].getChemistryMarks() + m[i].getMathematicsMarks();
        total_class_marks += total_student_marks;
        cout << "Total marks for student " << (i + 1) << " (" << p[i].name << "): " << total_student_marks << endl;
    }

    double class_average = static_cast<double>(total_class_marks) / num_students;
    cout << "Average marks of the class: " << class_average << endl;

    return 0;
}
