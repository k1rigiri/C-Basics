#include <stdio.h>
#include <stdlib.h>
#define x 3
#define y 3
void genrand(int a, int b, int m[x][y])
{
    int i, j;
    srand(time(NULL)*1000);
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            *(*(m+i)+j) = rand()%((b-a)+a);
        }
    }
}
void print(int m[x][y])
{
    int i, j;
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            printf("arr[%d][%d] = %d  ", i, j, *(*(m+i)+j));
        }
        printf("\n");
    }
}
int maxi(int m[x][y])
{
    int i, j, e_max = m[0][0];
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            if ((i==j) && ( *(*(m+i)+j) > e_max ))
            {
                e_max = *(*(m+i)+j);
            }
        }
    }
    return e_max;
}
int sum(int nom, int m[x][y])
{
    int i, j, s=0;
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            if (j==nom-1)
            {
                s+= *(*(m+i)+j);
            }
        }
    }
    return s;
}
void replace(int m[x][y])
{
    int i, j;
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            if (i>j)
            {
                *(*(m+i)+j) = 0;
            }
            if (i<j)
            {
                *(*(m+i)+j) = 1;
            }
        }
    }
}

int main()
{
    int a = -100, b = 100, num = 2;
    int arr[x][y];
    genrand(a, b, arr);
    print(arr);
    printf("Max element = %d\n", maxi(arr));
    printf("Sum of elements in %d column: %d\n", num, sum(num, arr));
    replace(arr);
    printf("Array after replace func:\n");
    print(arr);
}
