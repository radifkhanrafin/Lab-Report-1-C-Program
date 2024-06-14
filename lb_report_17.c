#include <stdio.h>
#include <math.h>

int main()
{

    for (int i = 1; i <= 10000; i++)
    {
        int sum_of_number = 0;
        int temp = i;
        int i_of = 0;

        while (temp != 0)
        {
            temp /= 10;
            i_of++;
        }

        temp = i;

        while (temp != 0)
        {
            int digit = temp % 10;
            sum_of_number += pow(digit, i_of);
            temp /= 10;
        }

        if (sum_of_number == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
