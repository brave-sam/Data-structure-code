#include <stdio.h>

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void deletion(int arr[],int size , int index){
    for (int i = index; i < size-1; i++)
    {
       arr[i]=arr[i+1];
    }
    
}
int main(){
    int arr[100]={1,2,3,45,4,5};
    int size =6,index=3;
    printf("Value Before Deletion :\n");
    display(arr,size);
    deletion(arr,size,index);
    size--;
    printf("Value after deletion : \n");
    display(arr,size);

    return 0;
}