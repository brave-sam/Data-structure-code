#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d, ", a[i]);
    }
    printf("\n");
}
int maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int a[], int n)
{
    int i, j;
    int max = maximum(a, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int a[] = {56, 54, 32, 87, 2, 3, 2, 1, 67};
    int n = 9;
    printArray(a, n);
    countSort(a, n);
    printArray(a, n);
    return 0;
}