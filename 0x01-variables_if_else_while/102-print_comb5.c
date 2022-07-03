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
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
if (i < 10)
{
putchar('0');
}
putchar(i + '0');
putchar(' ');
if (j < 10)
{
putchar('0');
}
putchar(j + '0');
if (i == 97 && j == 98)
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
