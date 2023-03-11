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
        printf("\t%d->", ptr->data);
        ptr = ptr->next;
    }
}
// InserTion First..
struct node *insert_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
// Insertion Last
struct node *insert_last(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insert_node(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}
// Insertion Given Value
struct node *insert_given(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *sec;
    struct node *th;

    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    th = (struct node *)malloc(sizeof(struct node));

    head->data = 90;
    head->next = sec;

    sec->data = 98;
    sec->next = th;

    th->data = 100;
    th->next = NULL;

    printf("\n--------------------------------------------------------------\n");
    printf("\tValue Before Insertion: \n");
    show(head);
    printf("\n--------------------------------------------------------------\n");
    printf("\tValue After Insertion: \n");
    head = insert_first(head, 78);
    head = insert_last(head, 178);
    head = insert_given(head, 118, 4);
    head = insert_node(head, sec, 99);
    show(head);
    return 0;
}