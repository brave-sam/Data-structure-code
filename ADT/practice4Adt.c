#include <stdio.h>
#include <stdlib.h>

struct array{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct array * a,int tsize, int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
};
void enterArray(struct array *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
      printf("Enter the value at %d",i);
      scanf("%d",&n);
      (a->ptr)[i]=n;
    }
    
}
void showArray(struct array *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
int main() 
{
    struct array marks;
    int tv , uv ;
    printf("Enter the value of tv : ");
    scanf("%d",&tv);
    printf("Enter the value of uv : ");
    scanf("%d",&uv);
    createArray(&marks,tv,uv);
    enterArray(&marks);
    printf("After entering : ");
    showArray(&marks);

}