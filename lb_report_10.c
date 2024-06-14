#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        if (n / 4 == 0)
        {
            printf("It's a Even number and also divisible by 4");
        }
        else
        {
            printf("It's a Even number but not divisible by 4");
        }
    }
    else
    {
        if (n / 3 == 0)
        {
            printf("It's a Odd number and also divisible by 3");
        }
        else
        {
            printf("It's a Odd number but not divisible by 3");
        }
    }

    return 0;
}