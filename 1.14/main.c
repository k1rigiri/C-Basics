#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1;
    int x,k;
    printf("Print float x: ");
    scanf("%f", &x1);
    x = x1;
    x1 = x1 - x;
    k = x1 * 10;
    printf("first number of float part = %d", k);
    return 0;
}
