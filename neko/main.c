#include <stdio.h>
#include <stdlib.h>

void digits(void);

int cdigits = 0;
int cchars = 0;

int main()
{
    digits();
    printf("\nQuantity of digits %d\n", cdigits);
    printf("Quantity of chars %d\n", cchars);
}

void digits(void)
{
    char ch;
    if ((ch = getch())!= '.')
    {
        if (isdigit(ch))
        {
            cdigits++;
            putchar(ch);
            digits();
        }
        else
        {
            cchars++;
            putchar(ch);
            digits();
        }
    }
}
