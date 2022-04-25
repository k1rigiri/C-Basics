#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a[] = {23,0,45,-5,12,0,-2,30,0,64};
    int *p;
    int i;
    int sum = 0, count = 0;
    float avg = 0;
    int l = sizeof(a)/sizeof(int);
    p = a;
    for (int i = 1; i <= l; i++)
    {
        sum += *p;
        if (*p != 0)
        {
            count += 1;
            avg += *p;
        }
        p++;
    }
    avg = avg/count;
    printf("Сумма эдементов массива: %d\n", sum);
    printf("Количество ненулевых элементов: %d\n", count);
    printf("Среднее арифметическое ненулевых элементов: %f\n", avg);
}
