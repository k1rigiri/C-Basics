#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int *min, *p;
    int i;
    int l = sizeof(a)/sizeof(int);
    p = a;
    for (i = 1; i <= l; i++)
    {
        printf("Enter a[%i]\n", i);
        scanf("%i",p);
        p++;
    }
    min = a;
    p = a + 1;
    for (i = 2; i <= l; i++)
    {
        if (*p < *min)
        {
            min = p;
        }
        p++;
    }
    printf("Min = %i\n", *min);
}
