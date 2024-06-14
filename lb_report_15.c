#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    long long int arry[n];
    int isPalindrome = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arry[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {

        if (arry[i] != arry[n - i - 1])
        {
            isPalindrome = 0;
        }
    }

    if (isPalindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}