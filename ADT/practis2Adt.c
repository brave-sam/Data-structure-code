#include <stdio.h>
#include <stdlib.h>
struct newTable
{
    int total_size;
    int used_size;
    int *ptr;
};
void createTable(struct newTable * a, int tsize, int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr= (int*)malloc(tsize*sizeof(int));
}
void showTable(struct newTable *a){
    for (int i = 0; i <a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }    
}
void enterTable(struct newTable *a){
    int n;
    for (int i = 0; i <a->used_size; i++)
    {
        printf("Enter the value at %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
}
int main(){
    struct newTable numbers;
    int tv,uv;
    printf("Enter the value of tv");
    scanf("%d",&tv);
    printf("Enter the value of uv");
    scanf("%d",&uv);
    createTable(&numbers,tv,uv);
    enterTable(&numbers);
    printf("Showing entred table\n");
    showTable(&numbers);
    return 0;
}