#include <stdio.h>
int main()
{
    float mark;
    printf("Enter Your Marks : \n");

    scanf("%f", &mark);
    if (mark >= 80 && mark <= 100)
    {
        printf("A");
    }
    else if (mark >= 70 && mark <=79)
    {
        printf("B");
    }
    else if (mark >= 60 && mark <= 69)
    {
        printf("C");
    }
    else if (mark >= 50 && mark <= 59)
    {
        printf("D");
    }
    else if ( mark <= 49)
    {
        printf("F");
    }
    return 0;
}