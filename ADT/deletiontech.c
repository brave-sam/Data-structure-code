#include <stdio.h>


void display (int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void deletion( int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main(){
    int arr[100]={3,45,4,5,6};
    int size = 5 , index =1;
   printf("Array Before Deletion :\n");
    display(arr,size);
    deletion(arr,size,index);
    size--;
     printf("Array After Deletion :\n");
    display(arr,size);

    return 0;
}