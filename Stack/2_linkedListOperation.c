#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elemenet : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
struct node *pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int main()
{
    struct node *top = NULL;
    top = push(top, 9);
    top = push(top, 349);
    top = push(top, 3219);
    linkedList(top);
    int element = pop(&top);
    printf("Stack After POPED element %d from stack \n", element);
    linkedList(top);

    return 0;
}