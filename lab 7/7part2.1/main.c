#include <stdio.h>
#include <stdlib.h>
#define size 10
int count = 0;
int i;
int orderup(int *arr);
int main()
{
    int a[size];
    int *p;
    p = a;
    for (i=1; i<=size ; i++)
    {
        printf("Enter a[%d]\n", i);
        scanf("%d",p);
        p++;
    }
    orderup(a);
    if (count == 0)
    {
        printf("by order");
    }
    else
    {
        printf("not by order");
    }
}
int orderup(int *arr)
{
    for (i=0; i < size; i++)
    {
        if (*arr > *(arr+1))
        {
            count++;
        }
    arr++;
    }
}
