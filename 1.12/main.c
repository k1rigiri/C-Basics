#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, k;
    printf("Print int x: ");
    scanf("%d", &x);
    k = x / 10 / 10 % 10;
    printf("k = %d", k);
    return 0;
}
