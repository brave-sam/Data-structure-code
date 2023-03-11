#include <stdio.h>
#include <stdlib.h>
struct myTable{
    int total_size;
    int used_size;
    int *ptr;
};
void createTable(struct myTable * a, int tsize, int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void enterTable(struct myTable *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("Enter the value at %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
void showTable(struct myTable *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d\n",(a->ptr)[i]);
    }
}
int main(){
    struct myTable marks;
    int tv,uv;
    printf("Enter the value of tv");
    scanf("%d",&tv);
    printf("Enter the value of uv");
    scanf("%d",&uv);
    createTable(&marks,tv,uv);
    enterTable(&marks);
    printf("Showing entred table\n");
    showTable(&marks);
    return 0;
}