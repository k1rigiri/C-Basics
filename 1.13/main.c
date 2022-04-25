#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, k=0;
    printf("print x: ");
    scanf("%d", &x);
    k = x / 100 + x / 10 % 10 + x % 10;
    printf("k = %d", k);
    return 0;

}
