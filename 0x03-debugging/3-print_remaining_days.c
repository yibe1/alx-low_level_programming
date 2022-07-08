#include <stdio.h>
#include "main.h"


static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int i,leap;

leap = year % 4 == 0 && year%100 != 0 || year%400 == 0;

for(i = 1; i < month; i++)
day += daytab[leap][i];
    
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}

