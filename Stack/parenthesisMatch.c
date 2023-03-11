#include <stdio.h>
#include <stdlib.h>

struct node
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct node *ptr)
{
    if (ptr->top == -1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
void push(struct node *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct node *ptr)
{
    if (isEmpty(ptr))
    {
        printf("STack underflow\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return 0;
    }
}
int parenthesisMatch(char *exp)
{
    struct node *s;
    s = (struct node *)malloc(sizeof(struct node));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if (isEmpty(s))
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
    char *exp = "(9))";
    if (parenthesisMatch(exp))
    {
        printf("MAtched");
    }
    else
    {
        printf("Not Matched");
    }
    return 0;
}