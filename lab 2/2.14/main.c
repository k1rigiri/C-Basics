#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code, min;
    float x;
    printf("Enter code of city:\n");
    scanf("%d", &code);
    printf("Enter minutes of conversation:\n");
    scanf("%d", &min);
    switch(code)
    {
        case 432:
            x = min*9.20;
            printf("Price of conversation = %f", x);
            break;
        case 95:
            x = min*4.10;
            printf("Price of conversation = %f", x);
            break;
        case 861:
            x = min*2.05;
            printf("Price of conversation = %f", x);
            break;
        case 844:
            x = min*2.50;
            printf("Price of conversation = %f", x);
            break;
        default:
            printf("Wrong city`s code\n");
            break;
    }
}
