#include <stdio.h>

void char_change(char *str)
{
    int i;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char name[100] = "Md. Anichur Rahaman";
    char_change(name);
    printf("My name is %s \n", name);
    return 0;
}