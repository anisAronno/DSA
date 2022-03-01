#include <stdio.h>
void lwr_to_upper(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            continue;
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
}

int main()
{
    char name[100]; 
    fgets(name, 100, stdin);
    lwr_to_upper(name);
    printf("My name is %s \n", name);
    return 0;
}