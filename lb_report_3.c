// Write a C program that takes number of days as input, and then converts it into years and days,and displays the results. Assume that, 1 year = 365 days.

#include <stdio.h>
int main()
{
    int day, year;

    printf("Number of days: \n");

    scanf("%d", &day);
    year = day / 365;
    int restDay = day % 365;
    printf("Years: %d\n", year);
    printf("Days: %d\n", restDay);

    return 0;
}