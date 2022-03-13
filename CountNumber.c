#include <stdio.h>

int main()
{

    int n, count;
    n = 15387979;
    count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("Count number is %d \n", count);

    return 0;
}