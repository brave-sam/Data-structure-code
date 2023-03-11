#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int size;
    int top;
    int *arr;
};
int precidence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int isOperator(char ch)
{
    if (ch == '*' || ch == '+' || ch == '-' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stacktop(struct node *s)
{
    return s->arr[s->top];
}
int isEmpty(struct node *ptr)
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
int isFull(struct node *ptr)
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
void push(struct node *s, char val)
{
    if (isFull(s))
    {
        printf("Stack Overflow and %d cannot be inserted", val);
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
char pop(struct node *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow");
        return 1;
    }
    else
    {
        char element = s->arr[s->top];
        s->top--;
        return element;
    }
}
char *infinixtopostfix(char *infinix)
{
    struct node *s = (struct node *)malloc(sizeof(struct node));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infinix) + 1) * sizeof(char));
    // int i = 0;
    int i = 0;
    int j = 0;
    while (infinix[i] != '\0')
    {
        if (!isOperator(infinix[i]))
        {
            postfix[j] = infinix[i];
            i++;
            j++;
        }
        else
        {
            if (precidence(infinix[i]) > precidence(stacktop(s)))
            {
                push(s, infinix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }
    while (isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infinix = "a-b";
    printf("Postfix is %s", infinixtopostfix(infinix));
    return 0;
}