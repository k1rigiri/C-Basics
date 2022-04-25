#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, e, f;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Enter E and F:\n");
    scanf("%d %d", &e, &f);
    if (a>e && a<f)
    {
        printf("%d", a);
    }
    if (b>e && b<f)
    {
        printf("%d", b);
    }
    if (c>e && c<f)
    {
        printf("%d", c);
    }
}
