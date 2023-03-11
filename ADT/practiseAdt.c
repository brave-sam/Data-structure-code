#include <stdio.h>
#include <stdlib.h>


struct table
{
    int total_size;
    int used_size;
    int *ptr;
};
void createTable(struct table * a, int tsize , int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr= (int*)malloc(tsize*sizeof(int));
}
void showTable(struct table *a){
    for (int i = 0; i <a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
void enterTable(struct table *a){
    int n;
    for (int i = 0; i <a->used_size; i++)
    {
        printf("Enter the value of %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
}



int main(){
    struct table number;
    createTable(&number,10,2);
    enterTable(&number);
    showTable(&number);
    return 0;
}