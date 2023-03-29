//5. Consider a class Matrix of size 3X3. Let m1 & m2 are two matrices. Find out m3=m1+m2 (use operator overloading).

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
    Matrix operator+(Matrix m)
    {
        int m3[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m3[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return Matrix(m3);
    }
};

int main()
{
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix m3(m1);
    Matrix m4(m2);
    Matrix m5 = m3 + m4;
    m5.display();
    return 0;
}