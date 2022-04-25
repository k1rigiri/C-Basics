#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter x,y:\n");
    scanf("%d %d", &x, &y);
    if ((x==0) && (y==0)) {printf("Dot on origin of coordinates\n");}
    else if ((x>0) && (y>0)) {printf("1 quadrant");}
    else if ((x<0) && (y>0)) {printf("2 quadrant");}
    else if ((x<0) && (y<0)) {printf("3 quadrant");}
    else if ((x>0) && (y<0)) {printf("4 quadrant");}
    else if ((x==0) && (y!=0)) {printf("Dot on axis Y");}
    else {printf("Dot on axis X");}
    }
