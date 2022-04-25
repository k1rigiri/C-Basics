#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[]={12,10,5,7,15,4,10,17,23,7};
    int l = sizeof(a)/sizeof(int);
    int min,max,count = 0;
    float avg = 0;
    min = a[0];
    max = a[0];
    for (i=0;i<l;i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i=0;i<l;i++)
    {
        if (a[i] != max && a[i] != min)
        {
            avg += a[i];
            count += 1;
        }
    }
    avg = avg/count;
    printf("min = %d\n", min);
    printf("max = %d\n", max);
    printf("avg = %f\n", avg);
}
