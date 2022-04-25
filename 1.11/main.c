#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, x2, x3, x5, x10;
    printf("Print float x: ");
    scanf("%f", &x);
    x2 = x * x;
    x3 = x2 * x;
    x5 = x2 * x3;
    x10 = x5 * x5;
    printf("res = %f, %f", x3, x10);
    return 0;
}
