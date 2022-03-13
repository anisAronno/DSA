#include <stdio.h>

int main()
{

    int num, temp, reminder;
    printf("Please input a number \n");
    int sum = 0;
    temp = num;
    scanf("%d", &num);
    while (temp != 0)
    {
        reminder = temp % 10;
        sum =sum+ reminder;
        temp= temp/10;
    }

    printf("reminder is %d \n", sum);
    return 0;
}