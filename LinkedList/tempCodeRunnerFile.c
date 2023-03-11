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
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// deleting first node
struct node *delete_first(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}

// delete in index
struct node *delete_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// Delete the last NODE
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
// Delete the element with a given value
struct node *delete_at_value(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->data != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
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

    printf("Value Before Deletion:\n");
    show(head);
    // head = delete_first(head);
    // head = delete_last(head);
    head = delete_at_value(head, 89);
    printf("Value after Deletion:\n");
    show(head);
    return 0;
}