#include <stdio.h> 
void upr_to_lwr(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
}
int main()
{
    char name[100] = "Md. Anichur Rahaman";
    upr_to_lwr (name);  
    printf("My name is %s \n", name);
    return 0;
}