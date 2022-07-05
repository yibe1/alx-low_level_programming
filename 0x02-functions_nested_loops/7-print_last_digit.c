/*#include <stdio.h>*/

/**
 * print_last_digit-function that works on returning the last digit
 * Description: will take a number and return the last digit of a number
 * @x: will the number input to the function
 *
 * Return: will return a number
 *
 */



int print_last_digit(int x)
{
int t, n;
if (x < 0)
t = x * -1;
else
t = x;

n = t % 10;
_putchar(n + '0');
return (n);
}
