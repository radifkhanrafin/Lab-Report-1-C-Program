
#include <stdio.h>
int main()
{
    int r,Area;
    float pi = 3.1416, Circumference ;
    printf("Enter radius: \n");
    scanf("%d", &r);
    Circumference = 2 * pi * r;
    Area = pi * r * r;
    printf("Circumference = %.2f units\nArea = %d square units\n", Circumference, Area);

    return 0;
}