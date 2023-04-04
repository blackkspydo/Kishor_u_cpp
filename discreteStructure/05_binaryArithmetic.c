// binary arithmetic operations
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

void decimalToBinary(int decimal, char binary[])
{
    int i = 0;
    while (decimal > 0)
    {
        binary[i] = (decimal % 2) + '0';
        decimal /= 2;
        i++;
    }
    binary[i] = '\0';
    reverse(binary); // only if strrrev() is not available in your compiler
    // strrev(binary);
}

void binaryToDecimal(char binary[], int *decimal)
{
    for (int i = strlen(binary) - 1, j = 0; i >= 0; i--, j++)
    {
        *decimal += (binary[i] - '0') << j;
    }
}

int main()
{
    char binary1[32], binary2[32];
    int decimal1 = 0, decimal2 = 0;

    // Input first binary number
    printf("Enter first binary number: ");
    scanf("%s", binary1);

    // Input second binary number
    printf("Enter second binary number: ");
    scanf("%s", binary2);

    // Convert binary to decimal
    binaryToDecimal(binary1, &decimal1);
    binaryToDecimal(binary2, &decimal2);

    // operations
    int sum = decimal1 + decimal2;
    int difference = decimal1 - decimal2;
    int product = decimal1 * decimal2;
    int quotient = decimal1 / decimal2;

    // convert back to binary
    char binarySum[32], binaryDifference[32], binaryProduct[32], binaryQuotient[32];

    decimalToBinary(sum, binarySum);
    decimalToBinary(difference, binaryDifference);
    decimalToBinary(product, binaryProduct);
    decimalToBinary(quotient, binaryQuotient);

    // print results
    printf("Sum: %s\n", binarySum);
    printf("Difference: %s\n", binaryDifference);
    printf("Product: %s\n", binaryProduct);
    printf("Quotient: %s\n", binaryQuotient);
    return 0;
}
