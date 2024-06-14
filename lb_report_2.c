// Write a C program to calculate and display the total salary of an employee considering that total salary is the sum of basic salary and house rent. The program must ask the user for the basic salary and percentage of basic salary which determines the house rent.

#include <stdio.h>
int main()
{
    float salary, home_rent, total_salary;
    printf("How much is your basic salary : \n");
    scanf("%f", &salary);
    printf("How much percentage of salary for house rent : \n");
    scanf("%f", &home_rent);
    home_rent = (home_rent / 100) * salary;
    total_salary = salary + home_rent;
    printf("total salary : %.2f", total_salary);
    
    return 0;
}