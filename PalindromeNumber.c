#include <stdio.h>

int main()
{

    int temp, reminder;
    int num = 11;
    int sum = 0;
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        sum = sum * 10 + reminder;
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("Palindrome Number");
    }
    else
    {

        printf("Not Palindrome Number");
    }

    return 0;
}