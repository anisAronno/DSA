#include <stdio.h>

int main()
{

    int rows, i, j, spaces, stars;
    rows=10;
    spaces=rows-1;
    stars=1;
    for (i = 1; i < (rows * 2); i++)
    {
        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (j = 1; j < (stars * 2); j++)
        {
            printf("*");
        }
        printf("\n");

        if (i < rows)
        {
            stars++;
            spaces--;
        }
        else
        {
            stars--;
            spaces++;
        }
    }

    return 0;
}