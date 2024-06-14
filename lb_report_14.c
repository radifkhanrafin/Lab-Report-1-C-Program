#include <stdio.h>

int main()
{
    int n, i, sum_of_while_loop = 0, sum_of_for_loop = 0;

    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        sum_of_while_loop = sum_of_while_loop + (i + 1) * (i + 2);
        i++;
    }

    for (int j = 1; j <= n; j++)
    {
        sum_of_for_loop = sum_of_for_loop + (j + 1) * (j + 2);
    }

    if (sum_of_while_loop == sum_of_for_loop)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal.\n");
    }

    return 0;
}
