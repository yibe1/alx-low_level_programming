#include <stdio.h>

/**
 * print_last_digit - function that works on returning the last digit of a number
 * Description: will take a number and return the last digit of a number
 * @x: will the number input to the function
 *
 * Return: will return a number
 *
 */



int print_last_digit(int x)
{
int n = x % 10;
putchar(n);
return(x % 10);
}
