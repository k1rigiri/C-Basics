#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a[] = {12, 10, 5, 7, 15, 4, 10, 17, 23, 7};
    int *p;
    int *min;
    int *max;
    float avg = 0;
    int count = 0;
    int i;
    int l = sizeof(a)/sizeof(int);
    p = a;
    min = a;
    max = a;
    for (i = 1; i <= l; i++)
    {
//        avg += *p;
//        count += 1;
        if (*p < *min)
        {
            min = p;
        }
        if (*p > *max)
        {
            max = p;
        }
        p++;
    }
    p = a;
    for (i = 1; i <= l; i++)
    {
        if (*p != *min && *p != *max)
        {
            avg += *p;
            count += 1;
        }
        p++;
    }
//    avg -= *max;
//    avg -= *min;
//    count -= 2;
    avg = avg / count;
    printf("Минимальный элемент: %i\n", *min);
    printf("Максимальный элемент: %i\n", *max);
    printf("Среднее арифм. без учета min и max значений: %f\n", avg);
}
