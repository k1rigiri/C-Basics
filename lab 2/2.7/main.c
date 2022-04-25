#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter A:\n");
    scanf("%d", &a);
    printf("Enter B:\n");
    scanf("%d", &b);
    printf("Enter C:\n");
    scanf("%d", &c);
    if ((a%2==0) || (b%2==0) || (c%2==0))
    {
        printf("Even numbers - YES");
    }
    else
    {
        printf("Even numbers - NO");
    }
}
