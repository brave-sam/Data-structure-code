#include <stdio.h>
#include <stdbool.h>
// declration of set and relation
// const int N=100;
int set[100];
int R[100][100];
bool reflexive(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (R[i][i] != 1)
            return false;
    }
    return true;
}
bool symmetric(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (R[i][j] == 1 && R[j][i] != 1)
            {
                return false;
            }
        }
    }
    return true;
}
bool transitive(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (R[i][j] == 1) //{i,j} exists
            {
                for (int k = 0; k < n; k++)
                {
                    if (R[j][k] == 1) //{j,k} exists
                    {
                        if (R[i][k] != 1)
                            return false;
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
    int n;
    // input the set elements
    printf("enter the no of elements in set\n");
    scanf("%d", &n);
    printf("enter the elements in set\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }
    // inputing the relation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("{%d,%d}?\n", set[i], set[j]);
            scanf("%d", &R[i][j]);
        }
    }
    //==outputing the equivalent matrix
    printf("equivalent relaion matrix \n\n");
    printf(" ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", set[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", set[i]);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
    //=====outputing the result.
    bool ref = reflexive(n);
    printf("the relation is reflexive :- %d\n", ref);
    bool sym = symmetric(n);
    printf("the relation is symmetric :- %d\n", sym);
    bool trans = transitive(n);
    printf("the relation is transitive :- %d\n", trans);
    bool equiv = ref && sym && trans;
    printf("the relation is eqivalence :- %d\n", equiv);
    return 0;
}