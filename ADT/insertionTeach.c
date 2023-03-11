#include <stdio.h>

void display(int arr[],int n){
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
    return 1;
    
}
int main(){
    int arr[100]={24,56,78};
    int size =3,element=43,index=2;
    display(arr,size);
    insertion(arr,size,element,100,index);
    size++;
    display(arr,size);
}