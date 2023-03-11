#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void linkedlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    struct node *head;
    struct node *sec;
    struct node *th;

    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    th = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 9;
    head->next = sec;

    sec->prev = head;
    sec->data = 10;
    sec->next = th;

    th->prev = sec;
    th->data = 87;
    th->next = NULL;

    linkedlist(head);

    return 0;
}