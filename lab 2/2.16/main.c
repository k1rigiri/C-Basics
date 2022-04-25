#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, V, x;
    printf("Enter count of fish:\n");
    scanf("%d", &count);
    printf("Enter V of aquarium:\n");
    scanf("%d", &V);
    if (count*3 < V)
    {
        printf("Aquarium is not overcrowded");
    }
    else
        x = (count*3-V) / 3;
        printf("Aquarium is overcrowded\n");
        printf("%d fish need to transfer", x);
}
