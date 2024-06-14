#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
    {
        if (x >= 65 && x <= 90)
        {
            printf("An uppercase letter\n");
        }
        else if (x >= 97 && x <= 122)
        {
            printf("A lowercase letter\n");
        }
    }
    else if (x >= 48 && x <= 57)
    {
        printf("A digit\n");
    }
    else
    {
        printf("I don’t know\n");
    }

    return 0;
}