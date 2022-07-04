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
  int i, j, l, k;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
l = i / 10;
k = i % 10;
putchar(l + '0');
putchar(k + '0'); 
putchar(' ');
l = j / 10;
k = j % 10;
putchar(l + '0');
putchar(k + '0'); 

if (i == 97 && j == 98)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
