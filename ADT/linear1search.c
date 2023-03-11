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
    int arr[]={1,34,53,54,67,87,67,53,21,42};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("Enter elemnt to be search: ");
    scanf("%d",&element);
    int searchIndex=linearSearch(arr,size,element);
    printf("Element %d is found at %d\n",element,searchIndex);

    return 0;
}