#include <stdio.h>
#include <stdlib.h>

//task 1
/*char string[100];
void main()
{
    puts("Enter string text:\n");
    gets(string);
    puts("\nWas enter string:");
    puts(string);
    getch();
}*/

//task 2
/*char s[50];
char string[50];
void main()
{
    puts("Enter string of symbols:");
    gets(s);
    puts("Was enter string:");
    puts(s);
}*/

//task 3
/*char str[]="Check";
void main()
{
    puts(str);
    char *ptr_s = "Examination string";
    putchar(*(ptr_s+2));
    putchar('\n');
    puts(ptr_s+12);
}*/

//task self

void main()
{
    char string[100];
    int i;
    puts("Enter string:");
    gets(string);
    for (i=0; i<sizeof(string); i++)
    {
        if (string[i] == '?')
        {
            string[i] = '!';
        }
    }
    for (i=0; i<sizeof(string); i++)
    {
        if (string[i] == '-')
        {
            string[i] = '\0';
        }
        if (string[i] == '&')
        {
        }
    }
    puts(string);
}
