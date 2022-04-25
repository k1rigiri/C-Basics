#include <stdio.h>
#include <stdlib.h>
#define size 4

int i;
int get_index(int* arr, int *y);
int main()
{
    int a[size];
    int *p;
    int x ;
    p = a;
    for (i=0; i<size ; i++)
    {
        printf("Enter a[%d]\n", i);
        scanf("%d",p);
        p++;
    }
    printf("Enter x\n");
    scanf("%d", x);
    printf("Index of first element = x: %d", get_index(a, &x));
}
int get_index(int* arr, int *y)
{
    int n = -1;
    for (i = 0; i < size; i++)
    {
        if (*arr == *y)
        {
            n = i;
            break;
        }
        arr++;
    }
    return n;
}
