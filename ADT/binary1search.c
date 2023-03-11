#include <stdio.h>


int BinarySearch(int arr[],int size , int element){
    int low ,mid,high;
    low =0;
    high =size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low =mid+1;

        }
        else{
            high =mid-1;
        }
    }
    return -1;
}


int main(){
    
     int arr[]={1,2,3,4,5,6,7,89,90};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("Enter elemnt to be search: ");
    scanf("%d",&element);
    int searchIndex=BinarySearch(arr,size,element);
    printf("Element %d is found at %d\n",element,searchIndex);
    return 0;
}