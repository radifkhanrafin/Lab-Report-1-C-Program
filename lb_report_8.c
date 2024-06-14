#include <stdio.h>
int main()
{
    int a, b, c, max_number, min_number;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        max_number = a;
    }
    else if (b > a && b > c)
    {
        max_number = b;
    }
    else if (c > a && c > a)
    {
        max_number = c;
    }

    if (a < b && a < c)
    {
        min_number = a;
    }
    else if (b < a && b < c)
    {
        min_number = b;
    }
    else if (c < a && c < a)
    {
        min_number = c;
    }

    printf("Maximum Number : %d\n", max_number);
    printf("Minimum Number : %d\n", min_number);

    return 0;
}