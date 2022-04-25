#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
   int a[5], i;
   int *p;
   int l = sizeof(a)/sizeof(int);
   p = a;
   for (i = 1; i <= l; i++)
   {
       printf("Enter a \n");
       scanf("%d", p);
       printf("a = %d", *p);
       p++;
   }
}
