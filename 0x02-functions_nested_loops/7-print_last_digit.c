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
int n;
n = log10(x) + 1;
char s[n]; 
sprintf(s,"%ld", i);
_putchar(s[n-1]);
return (s[n-1]);
}
