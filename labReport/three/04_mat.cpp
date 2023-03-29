// 4. Consider a class Matrix of size 3X3. Overload the – (unary) should negate the numbers stored in the object.

#include <iostream>
using namespace std;

class Matrix
{
private:
    int matrix[3][3];

public:
    Matrix(int m[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = m[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator-()
    {
        int m[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m[i][j] = -matrix[i][j];
            }
        }
        return Matrix(m);
    }
};

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix m1(m);
    m1.display();
    Matrix m2 = -m1;
    m2.display();
    return 0;
}