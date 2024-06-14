#include <stdio.h>
int main()
{
    int limit;
    long long int num_1 = 0, num_2 = 1, next;

    scanf("%d", &limit);

    if (limit == 1)
        printf("%d", limit);
    else if (limit >= 2)
    {
        printf("%lld %lld ", num_1, num_2);
        for (int i = 2; i < limit; i++)
        {
            next = num_1 + num_2;
            printf("%lld ", next);
            num_1 = num_2;
            num_2 = next;
        }
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n;
//     long long int num_0 = 0, num_1 = 1, next;
//     scanf("%d", &n);

//     if (n == 1) {
//         printf("%lld\n", num_0);
//     } else if (n >= 2) {
//         printf("%lld %lld", num_0, num_1);

//         for (int i = 2; i < n; i++)
//         {
//             next = num_0 + num_1;
//             printf(" %lld", next);

//             num_0 = num_1;
//             num_1 = next;
//         }
//         printf("\n");
//     }

//     return 0;
// }
