#include <stdio.h>

int main()
{

    int num, temp, reminder, i, fact;
    printf("Please input a number \n");
    int sum = 0;
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        fact = 1;
        for (i = 1; i <= reminder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("Stong number \n");
    }
    else
    {
        printf("Not Strong Number \n");
    }

    return 0;
}