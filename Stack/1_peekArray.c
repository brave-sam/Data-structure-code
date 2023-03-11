#include <stdio.h>
#include <stdlib.h>

struct node
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct node *ptr)
{
    if (ptr->top == -1)
    {
        printf("Underflow");
        return 1;
    }
    return 0;
}
int isFull(struct node *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Overflow");
        return 1;
    }
    return 0;
}

void push(struct node *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Are overflow cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct node *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Underflow");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct node *s, int i)
{
    int e = s->top - i + 1;
    if (e < 0)
    {
        printf("Not a valid postion in stack \n");
        return -1;
    }
    else
    {
        return s->arr[e];
    }
}
int main()
{
    struct node *a = (struct node *)malloc(sizeof(struct node));
    a->size = 89;
    a->top = -1;
    a->arr = (int *)malloc(a->size * sizeof(int));
    printf("Before Pushing , FULL : %d\n", isFull(a));
    printf("Before Pushing , empty : %d\n", isEmpty(a));
    push(a, 23);
    push(a, 26);
    push(a, 20);
    push(a, 53);
    push(a, 234);
    push(a, 223);
    printf("After Push , Full:%d\n", isFull(a));
    printf("After Push , empty:%d\n", isEmpty(a));
    printf("Popped %d from the stack \n", pop(a));

    for (int j = 1; j <= a->top; j++)
    {
        printf("ELement at position %d is %d\n", j, peek(a, j));
    }

    return 0;
}