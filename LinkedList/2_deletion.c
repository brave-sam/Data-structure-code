#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void show(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\tElement : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deletion_first(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}
struct node *delete_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main()
{

    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 9;
    head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 78;
    third->next = NULL;
    show(head);
    // head = deletion_first(head);
    head = delete_last(head);
    show(head);
    return 0;
}