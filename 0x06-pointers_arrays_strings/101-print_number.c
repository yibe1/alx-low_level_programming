include "main.h"
/**
 *print_number-prints number
 *@n:number to be printed
 *
 *Return:nothing
 *
 */

void print_number(int n)
{
int i = 0, j;
char *p;
while (1 == 1)
{
if (n / 10 > 1)
{
p[i] = n % 10 + '0';
n = n / 10;
}
else
{
p[i] = n + '0';
break;
}
i++;
}
while (i >= 0)
{
_putchar(p[i]);
i--;
}
}
