#include <stdio.h>
#include <stdlib.h>
#define size 4

int i;
void sumcount(int *arr, int s);
int main()
{
    float a[size];
    int *p;
    p = a;
    for (i=0; i<size ; i++)
    {
        printf("Enter a[%d]\n", i);
        scanf("%d",p);
        p++;
    }
    sumcount(a, size);
}
void sumcount(int *arr, int s)
{
    int m = 0, sum = 0;
    for (i=0 ; i<s; i++)
    {
        if (arr[i] < 0)
        {
            m = i;
            break;
        }
    }
    for (i=0; i<m; i++)
    {
        int p = 1;
        for (int j=0; j<= i; j++)
        {
            p = 1;
            p *= arr[i];
            sum += p;
        }
    }
    printf("sum = %d", sum);
}
