#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a[5], i;
    int *p;
    int count = 0;
    int l = sizeof(a)/sizeof(int);
    p = a;
    for (int i = 1; i <= l; i++)
    {
        printf("Enter a[%d]\n", i);
        scanf("%i",p);
        if (*p != 0)
        {
            count += 1;
        }
        p++;
    }
    printf("В массиве %d ненулевых элемента", count);
}
