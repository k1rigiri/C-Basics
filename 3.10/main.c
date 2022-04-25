#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("print x: ");
    scanf("%f", &x);
    y = x*(x*(x*(2*x-3)+4)-5)+6;
    printf("Result: %f ", y);
    return 0;
}
