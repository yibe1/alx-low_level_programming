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
int i, j, k, l;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = i; k <10; k++)
{
for(l = j + 1; l
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (i == 9 && j == 7 && k == 9 && l == 8)
break;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
