// C program to implement extended Euclidian Algorithm.

#include <stdio.h>

int extended_euclidean_algorithm(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extended_euclidean_algorithm(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}

int main()
{
    int a = 54;
    int b = 24;
    int x, y;
    int gcd = extended_euclidean_algorithm(a, b, &x, &y);
    printf("GCD(%d, %d) = %d\n", a, b, gcd);
    printf("Coefficients of Bezout's identity: %d and %d\n", x, y);
    return 0;
}
