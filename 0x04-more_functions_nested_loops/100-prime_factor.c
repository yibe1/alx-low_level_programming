#include <stdio.h>
/**
 * main-fizz-buzz
 *
 * Description: prints fizz-buzz
 *
 * Return: 0
 *
 */

int main(void)
{
int i, p = 2, N = 612852475143;
for (i = N-1; i > 0; i--)
{
if (N % i == 0)
{
printf(i);
break;
}
}
printf("\n");
return (0);
}
