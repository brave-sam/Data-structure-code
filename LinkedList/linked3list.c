#include <stdio.h>
#include <stdlib.h>

struct Sam
{
    int data;
    struct Sam *next;
};
void linkedListTravel(struct Sam *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Sam *head;
    struct Sam *two;
    struct Sam *three;
    struct Sam *four;

    head = (struct Sam *)malloc(sizeof(struct Sam));
    two = (struct Sam *)malloc(sizeof(struct Sam));
    three = (struct Sam *)malloc(sizeof(struct Sam));
    four = (struct Sam *)malloc(sizeof(struct Sam));

    head->data = 56;
    head->next = two;
    two->data = 98;
    two->next = three;
    three->data = 89;
    three->next = four;
    four->data = 99;
    four->next = NULL;

    linkedListTravel(head);
}