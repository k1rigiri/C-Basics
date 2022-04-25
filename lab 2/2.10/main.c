#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, max;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a,&b,&c);
    if (a > b && a > c)
    {
        printf("Max number - %d", a);
    }
    else if(b > c && b > a)
    {
        printf("Max number - %d", b);
    }
    else
    {
        printf("Max number - %d", c);
    }
}
