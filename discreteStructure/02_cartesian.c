// Program in C to find the Cartesian Product of two sets.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
void readSet(int set[], int size);
void printSet(int set[], int size);
void findCart(int arr1[], int arr2[], int n, int n1);
int main()
{
    int set1[MAX_SIZE], set2[MAX_SIZE];
    int product[MAX_SIZE][MAX_SIZE];
    int size1, size2, size3;
    // read sets
    printf("Enter the number of elements in the set1: ");
    scanf("%d", &size1);
    readSet(set1, size1);
    printf("Enter the number of elements in the set2: ");
    scanf("%d", &size2);
    readSet(set2, size2);
    findCart(set1, set2, size1, size2);
    printf("\n");
    return 0;
}

void findCart(int arr1[], int arr2[], int n, int n1)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("{%d, %d}, ", arr1[i], arr2[j]);
        }
    }
}

void readSet(int set[], int size)
{
    int i;

    // printf("Enter the elements of the set: ");
    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", &set[i]);
    // }

    // adding random numbers to the set to avoid manual input during testing, remove this loop for final program
    for (i = 0; i < size; i++)
    {
        set[i] = rand() % 20;
    }

    printSet(set, size);
}

// Function to print a set
void printSet(int set[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", set[i]);
    }
    printf("\n");
}
