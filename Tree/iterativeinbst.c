#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createtree(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
struct node *searchIter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
int main()
{
    struct node *p = createtree(7);
    struct node *p1 = createtree(88);
    struct node *p2 = createtree(78);
    p->left = p1;
    p->right = p2;
    struct node *n = searchIter(p, 78);
    if (n != NULL)
    {
        printf("Found: %d", n->data);
    }
    else
    {
        printf("ELement not found");
    }
    return 0;
}