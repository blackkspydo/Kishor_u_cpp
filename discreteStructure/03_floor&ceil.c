// Program in C to find ceiling and floor function.

#include <stdio.h>

int main()
{
    double num;
    int ceil_x, floor_x;
    printf("Enter a decimal number: ");
    scanf("%lf", &num);
    // using typecasting ti truncate the decimal part and add 1 to get the ceiling
    ceil_x = (int)num + ((num > (int)num) ? 1 : 0);
    // using typecasting ti truncate the decimal part to get the floor
    floor_x = (int)num - ((num < (int)num) ? 1 : 0);
    printf("Ceiling of %.2f is %d\n", num, ceil_x);
    printf("Floor of %.2f is %d\n", num, floor_x);
    return 0;
}