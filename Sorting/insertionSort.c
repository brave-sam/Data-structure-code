#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertionSort(int *a, int n)
{
    int key;
    int j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        /* code */
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int arr[] = {34, 23, 4, 54};
    int n = 4;
    printf("Array before Sorting\n");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("Array After Sorting\n");
    printArray(arr, n);
    return 0;
}