#include "main.h"
/**
 * print_diagonal-function to print triangle
 *
 * Description: ...
 * @n: size of triangle
 *
 * Return: nothing
 *
 */

void print_diagonal(int n)
{

int i, k;
for (i = 0; i < n; i++)
{
for (k = 0; k < i; k++)
{
_putchar(' ');
}
_putchar('\\');

_putchar('\n');
}
_putchar('\n');
}
