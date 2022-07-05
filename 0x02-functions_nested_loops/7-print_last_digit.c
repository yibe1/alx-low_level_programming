#include "main.h"

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
int last;

last = x % 10;

if (last < 0)
{
last = last * -1;
}

_putchar(last + '0');
return (last);
}
