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
}
// PREORDER
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// POSTORDER
void postorder(struct node *root)
{
    if (root != NULL)
    {

        preorder(root->left);
        preorder(root->right);
        printf("%d ", root->data);
    }
}
// INORDER
void inorder(struct node *root)
{
    if (root != NULL)
    {

        preorder(root->left);
        printf("%d ", root->data);
        preorder(root->right);
    }
}

int main()
{
    struct node *p = createtree(89);
    struct node *p1 = createtree(9);
    struct node *p2 = createtree(99);
    p->left = p1;
    p->right = p2;
    printf("\nPRE-ORDER-");
    preorder(p);
    printf("\nPOST-ORDER-");
    postorder(p);
    printf("\nIN-ORDER-");
    inorder(p);
    return 0;
}