// Program to implement Boolean meet.

#include <stdio.h>

void boolean_meet_matrix(int A[][3], int B[][3], int C[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = A[i][j] && B[i][j];
        }
    }
}

void print_matrix(int M[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[2][3] = {{1, 0, 1},
                   {0, 1, 0}};
    int B[2][3] = {{1, 1, 0},
                   {0, 1, 1}};
    int C[2][3];

    printf("Matrix A:\n");
    print_matrix(A, 2, 3);
    printf("Matrix B:\n");
    print_matrix(B, 2, 3);

    boolean_meet_matrix(A, B, C, 2, 3);

    printf("Matrix C (meet of A and B):\n");
    print_matrix(C, 2, 3);

    return 0;
}
