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
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == 9 && j > 8)
break;
putchar(',');
putchar(' ');
}
}
return (0);
}
