#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y=0;
    printf("Print three-digit number x: ");
    scanf("%d", &x);
    while (x>0)
    {
            y = y*10 + x % 10;
            x = x / 10;
    }
    printf("Reverse three-digit number - %d", y);
    return 0;
}
