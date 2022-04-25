#include <stdio.h>
#include <stdlib.h>

void mag(int *num, int order);
int main()
{
    int n = 4;
    int o = 2;
    mag(&n,o);
    printf("New digit = %d\n", n);
    return 0;
}
void mag(int *num, int order)
{
    for(; order; order --)
    {
        *num *= 10;
    }
}
