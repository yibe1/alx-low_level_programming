#include "main.h"
/**
 *print_number-prints number
 *@n:number to be printed
 *
 *Return:nothing
 *
 */

void print_number(int n)
{
int t = n;
int i = 1, j;
while (t > 10)
{
t = t / 10;
i = i * 10;
}
while (i > 1)
{
j = n / i;
n = n % i;
_putchar(j + '0');
i = i / 10;
}
_putchar(n + '0');
}
