#include <stdio.h>
int main()
{
    int year, totalDay = 0;
    scanf("%d", &year);

    for (int i = 1900; i <= year; i++)
    {
        if (i % 400 == 0 || i % 4 == 0)
        {
            totalDay += 366;
        }
        else
        {
            totalDay += 365;
        }
    }

    int day = totalDay % 7;
    switch (day)
    {
    case 0:
        return "Monday";
        break;
    case 1:
        return printf("Tuesday");
        break;
    case 2:
        return printf("Wednesday");
        break;
    case 3:
        return printf("Thursday ");
        break;
    case 4:
        return printf(" Friday");
        break;
    case 5:
        return printf(" Saturday");
        break;
    case 6:
        return printf("Sunday ");
        break;
    }

    return 0;
}