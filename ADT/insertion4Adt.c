#include <stdio.h>

void display(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
int main()
{
    int arr[100] = {1, 2, 4, 5, 6};
    int size = 5;
    int element, index;
    printf("Enter the element you want to entred in array: ");
    scanf("%d", &element);

    printf("Enter the index you want to chnge: ");
    scanf("%d", &index);
    printf("Value before insertion: \n");
    display(arr, size);
    insertion(arr, size, element, 100, index);

    size++;
    printf("Value after insertion: \n");
    display(arr, size);
}