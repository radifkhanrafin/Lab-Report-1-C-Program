// Write a C program to swap the values of two integer variables with and without using any extra variable.

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two Value: \n");
    scanf("%d %d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d\n", x, y);

    return 0;
}