#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 20;
    int *px = &age;
    int pxx = (int)malloc(4);
    pxx = &px;
    printf("result is %u \n", *px);
    printf("result is %u \n", pxx);
    return 0;
}