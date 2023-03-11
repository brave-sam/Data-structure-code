#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0] = 23;
    s->top++;
    s->arr[1] = 23;
    s->top++;
    s->arr[2] = 23;
    s->top++;
    s->arr[3] = 23;
    s->top++;
    s->arr[4] = 23;
    s->top++;
    s->arr[5] = 23;
    s->top++;
    s->arr[6] = 23;
    s->top++;

    // Check if stack is empty
    if (isEmpty(s))
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The stack is not empty");
    }
    // Check if stack is full
    if (isFull(s))
    {
        printf("\nThe stack is full");
    }
    else
    {
        printf("\nThe stack is not full");
    }
    return 0;
}
