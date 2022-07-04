#include <stdio.h>

/**
 * main-starting point
 *
 * Description: program that prints combination of two digits
 *
 * Return: returns 0 for success
 *
 */

int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
putchar(i[0] + '0');
putchar(i[1] + '0'); 
putchar(' ');
putchar(j[0] + '0');
putchar(j[1] + '0');

if (i == 97 && j == 98)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
