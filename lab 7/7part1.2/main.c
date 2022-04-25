#include <stdio.h>
#include <stdlib.h>

void order(int *a, int *b);
void order(int *a, int *b)
{
    int temp;
    if (a > b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else
    {
        return;
    }
}
int main()
{
    int x = 7;
    int y = 2;
    order(&x,&y);
    printf("x=%d  y=%d\n",x,y);
    return 0;
}
