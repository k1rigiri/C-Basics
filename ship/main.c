#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k1, order;
    printf("Enter the start course(N-1, E-2, S-3, W-4):\n");
    scanf("%d", &k1);
    printf("Enter the order(F-1, R-2, B-3, l-4):\n");
    scanf("%d", &order);
    if (order == 1)
    {
        printf("New course = %d", k1);
    }
    if (order == 2)
    {
        if (k1 == 4)
        {
            printf("New course == 1");
        }
        else
        {
            printf("New course = %d", k1+1);
        }
    }
    if (order == 4)
    {
        if (k1 == 1)
        {
            printf("New course == 4");
        }
        else
        {
            printf("New course == %d", k1-1);
        }
    }
    if (order == 3)
    {
        if (k1 == 3 || k1 == 4)
        {
            printf("New course == %d", k1-2);
        }
        else
        {
            printf("New course == %d", k1+2);
        }
    }
}
