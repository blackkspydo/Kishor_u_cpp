// Program in C to implement basic set operations: UNION, INTERSECTION and DIFFERENCE.#include <stdio.h>
#define MAX_SIZE 100

// Function declarations
int setUnion(int set1[], int set2[], int unionSet[]);
int setIntersection(int set1[], int set2[], int intersectionSet[]);
int setDifference(int set1[], int set2[], int differenceSet[]);

int main()
{
    int set1[MAX_SIZE], set2[MAX_SIZE], unionSet[MAX_SIZE], intersectionSet[MAX_SIZE], differenceSet[MAX_SIZE];
    int size1, size2, i;

    // Input size and elements of set1
    printf("Enter the size of set1: ");
    scanf("%d", &size1);

    printf("Enter the elements of set1: ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &set1[i]);
    }

    // Input size and elements of set2
    printf("Enter the size of set2: ");
    scanf("%d", &size2);

    printf("Enter the elements of set2: ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &set2[i]);
    }

    // Calculate union set and print
    int unionSize = setUnion(set1, set2, unionSet);
    printf("\nUnion of set1 and set2: ");
    for (i = 0; i < unionSize; i++)
    {
        printf("%d ", unionSet[i]);
    }

    // Calculate intersection set and print
    int intersectionSize = setIntersection(set1, set2, intersectionSet);
    printf("\nIntersection of set1 and set2: ");
    for (i = 0; i < intersectionSize; i++)
    {
        printf("%d ", intersectionSet[i]);
    }

    // Calculate difference set and print
    int differenceSize = setDifference(set1, set2, differenceSet);
    printf("\nDifference of set1 and set2: ");
    for (i = 0; i < differenceSize; i++)
    {
        printf("%d ", differenceSet[i]);
    }

    return 0;
}

// Function to calculate union of two sets
int setUnion(int set1[], int set2[], int unionSet[])
{
    int i, j, k, flag;
    k = 0;

    // Add all elements of set1 to union set
    for (i = 0; i < MAX_SIZE; i++)
    {
        unionSet[k] = set1[i];
        k++;
    }

    // Add elements of set2 to union set if not already present
    for (i = 0; i < MAX_SIZE; i++)
    {
        flag = 0;
        for (j = 0; j < k; j++)
        {
            if (set2[i] == unionSet[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            unionSet[k] = set2[i];
            k++;
        }
    }
    return k;
}

// Function to calculate intersection of two sets
int setIntersection(int set1[], int set2[], int intersectionSet[])
{
    int i, j, k;
    k = 0;

    // Add elements to intersection set if present in both sets
    for (i = 0; i < MAX_SIZE; i++)
    {
        for (j = 0; j < MAX_SIZE; j++)
        {
            if (set1[i] == set2[j])
            {
                intersectionSet[k] = set1[i];
                k++;
                break;
            }

        }
    }

    return k;

}