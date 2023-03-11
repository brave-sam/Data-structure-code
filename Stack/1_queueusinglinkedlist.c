#include <stdio.h>
#include <stdlib.h>
struct node *r = NULL;
struct node *f = NULL;
struct node
{
    int data;

    struct node *next;
};
void linkedlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements :%d", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    return 0;
}