#include <stdio.h>

int main()
{

    int temp, reminder;
    int num = 153;
    int sum = 0;
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        sum = sum  + reminder*reminder*reminder;
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("Armstrong Number");
    }else{

        printf("Not Armstrong Number");
    }

    return 0;
}