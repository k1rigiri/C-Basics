#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10
#include <locale.h>
/*
int main()
{
    char s[11] = "1234567890";
    int k;
    k = strlen(s);
    char *s1, *s2;
    s1 = (char *)malloc(k*sizeof(char));
    s1 = s;
    puts(s1);
    s2 = (char *)malloc(n*sizeof(char));
    gets(s2);
    strncpy(s1+2, s2, n);
    puts(s1);
    return 0;
}
*/
/*
int main()
{
    char *s1, *s2, *s3, *s4, *s;
    int k;
    puts("Enter 4 strings");
    s1 = (char *)malloc(n*sizeof(char));
    s2 = (char *)malloc(n*sizeof(char));
    s3 = (char *)malloc(n*sizeof(char));
    s4 = (char *)malloc(n*sizeof(char));
    gets(s1);
    gets(s2);
    gets(s3);
    gets(s4);
    k = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4);
    s = (char *)malloc(k*sizeof(char));
    s = s1;
    strcat(s, s2);
    strcat(s, s3);
    strcat(s, s4);
    puts(s);
}
*/
int main()
{
    char *s1, *s2, *s3, *s4;
    s1 = (char *)malloc(n*sizeof(char));
    s2 = (char *)malloc(n*sizeof(char));
    s3 = (char *)malloc(n*sizeof(char));
    s4 = (char *)malloc(n*sizeof(char));
    puts("Enter 4 strings:");
    gets(s1);
    gets(s2);
    gets(s3);
    gets(s4);
}
/*
int main()
{
    setlocale(LC_ALL, "Rus");
    char s[] = "1. Иванов И.И. 2. Петров П.П. 3. Сидоров С.С. 4. Александров А.А.";
    puts(s);
}
*/
