#include <stdio.h>
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void SelectionSort(int *a, int n)
{
    int imin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        imin = i;

        /* code */
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[imin])
            {
                imin = j;
            }
        }
        temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
    }
}
int main()
{
    int a[] = {32, 56, 3, 51, 1};
    int n = 5;
    printf("Array before Sorting\n");
    print(a, n);
    SelectionSort(a, n);
    printf("Array after Sorting\n");
    print(a, n);
    return 0;
}