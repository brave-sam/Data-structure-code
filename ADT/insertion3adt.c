#include <stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int insertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    
}
int main(){
    int arr[100]={1,3,4,5};
        int size = 4, element =2, index=1;
        printf("Value before insertion :\n");
        display(arr,size);
        insertion(arr,size,element,100,index);
        size++;
         printf("Value after insertion :\n");
         display(arr,size);
    
    return 0;
}