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
char t[];
t = x + '0'; 
int n;
n = sizeof(t);
n = t % 10;
_putchar(t[n-1]);
return (n);
}
