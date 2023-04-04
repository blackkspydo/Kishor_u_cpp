// Program in C to implement basic set operations: UNION, INTERSECTION and DIFFERENCE.#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// Function declarations
void readSet(int set[], int size);
void printSet(int set[], int size);
void unionSet(int set1[], int set2[], int size1, int size2);
void intersectionSet(int set1[], int set2[], int size1, int size2);
void differenceSet(int set1[], int set2[], int size1, int size2);

int main()
{
    int choice;
    int set1[MAX_SIZE], set2[MAX_SIZE];
    int size1, size2, size3;
    // read sets
    printf("Enter the number of elements in the set1: ");
    scanf("%d", &size1);
    readSet(set1, size1);
    printf("Enter the number of elements in the set2: ");
    scanf("%d", &size2);
    readSet(set2, size2);

    while (1)
    {
        printf("1. Union\n2. Intersection\n3. Difference\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            unionSet(set1, set2, size1, size2);
            break;
        case 2:
            intersectionSet(set1, set2, size1, size2);
            break;
        case 3:
            differenceSet(set1, set2, size1, size2);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice, please try again.");
        }
    }

    return 0;
}

// Function to read a set
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

void unionSet(int set1[], int set2[], int size1, int size2)
{
    int i, j, k;
    int set3[MAX_SIZE];
    int size3 = 0;

    // Copy set1 to set3
    for (i = 0; i < size1; i++)
    {
        set3[i] = set1[i];
    }
    size3 = size1;

    // Copy set2 to set3
    for (i = 0; i < size2; i++)
    {
        for (j = 0; j < size3; j++)
        {
            if (set2[i] == set3[j])
            {
                break;
            }
        }
        if (j == size3)
        {
            set3[size3] = set2[i];
            size3++;
        }
    }
    printf("The union of the two sets is: ");
    printSet(set3, size3);
}

void intersectionSet(int set1[], int set2[], int size1, int size2)
{
    int i, j, k;
    int set3[MAX_SIZE];
    int size3 = 0;

    // iterate through set1 and check if the element is present in set2
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j])
            {
                set3[size3] = set1[i];
                size3++;
                break;
            }
        }
    }

    printf("The intersection of the two sets is: ");
    printSet(set3, size3);
}

void differenceSet(int set1[], int set2[], int size1, int size2)
{
    int i, j, k;
    int set3[MAX_SIZE];
    int size3 = 0;

    // iterate through set1 and check if the element is present in set2 and only add it to set3 if it is not present in set2
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j])
            {
                break;
            }
        }
        if (j == size2)
        {
            set3[size3] = set1[i];
            size3++;
        }
    }
    printf("The difference of the two sets is: ");
    printSet(set3, size3);
}