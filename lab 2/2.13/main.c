#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, y;
    printf("Enter a number >1 and <999:\n");
    scanf("%d", &x);
    y = x%10;
    switch(y)
    {
        case 0:
            printf("%d ������", x);
            break;
        case 1:
            printf("%d �����", x);
            break;
        case 2:
            printf("%d �����", x);
            break;
        case 3:
            printf("%d �����", x);
            break;
        case 4:
            printf("%d �����", x);
            break;
        case 5:
            printf("%d ������", x);
            break;
        case 6:
            printf("%d ������", x);
            break;
        case 7:
            printf("%d ������", x);
            break;
        case 8:
            printf("%d ������", x);
            break;
        case 9:
            printf("%d ������", x);
            break;

    }
}
