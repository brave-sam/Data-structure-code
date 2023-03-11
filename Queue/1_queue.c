#include <stdio.h>
#include <stdlib.h>

struct array
{
    int f;
    int r;
    int size;
    int *arr;
};

int isFull(struct array *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct array *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct array *q, int val)
{
    if (isFull(q))
    {
        printf("queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct array *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("queue is empty");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct array q;
    q.size = 200;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 34);
    enqueue(&q, 24);
    enqueue(&q, 14);
    printf("Dequeu element  %d", dequeue(&q));
    if (isEmpty(&q))
    {
        printf("Queue is empty");
    }
    return 0;
}