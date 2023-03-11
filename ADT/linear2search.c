#include <stdio.h>


int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
       if(arr[i]==element){
        return i;
       }
    }
    return -1;
}
int main(){
    int arr[]={1,45,2,3,56,7,4,56,7};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("Element to be search : ");
    scanf("%d",&element);
    int searchIndex= linearSearch(arr,size,element);
    printf("The element %d is found at %d",element , searchIndex);

    return 0;
}