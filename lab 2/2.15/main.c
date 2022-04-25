#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, sec, free, music;
    free = 6*1024;
    printf("Enter min and sec of music:\n");
    scanf("%d %d", &min, &sec);
    music = (sec + min*60) * 16;
    if (music < free)
    {
        printf("Yes, you can save");
    }
    else
    {
        printf("No, you cant");
    }
}
