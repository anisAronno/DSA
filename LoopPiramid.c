#include <stdio.h>

int main()
{

    int width = 20, i, j;
    for (i = 0; i < width; i++)
    {
        for (j = (i + 1); j < width; j++)
        {
            printf(" ");
        }

        for (j = 0; j < (2 * i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}