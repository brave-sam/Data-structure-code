#include <stdio.h>

void display(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void deletion(int arr[], int size, int element)
{
    for (int i = element; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 65, 7, 8, 9, 0};
    int size = 11;
    int element;
    printf("Enter the element you want to delete: ");
    scanf("%d", &element);
    printf("Value before deletion:\n");
    display(arr, size);
    deletion(arr, size, element);
    size--;
    printf("Value after deletion:\n");
    display(arr, size);
    return 0;
}