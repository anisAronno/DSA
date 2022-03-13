#include <stdio.h>

int main()
{

    int temp, reminder;
    int num=123;
    int sum = 0;
    temp = num; 
    while (temp != 0)
    {
        reminder = temp % 10;
        sum =sum*10+ reminder;
        temp= temp/10;
    }

    printf("reminder is %d \n", sum);
    return 0;
}