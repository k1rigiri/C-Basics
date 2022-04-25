#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x1, x2, x3;
    printf("Enter a number:\n");
    scanf("%d", &x);
    x1 = x%10;
    x2 = x/10;
    x3 = x/10%10;
    if (x1 == x2 || x2 == x3 || x3 == x1 )
    {
        printf("This number have same digits\n");
    }
    else
    {
        printf("This number doesnt have same digits");
    }
}
