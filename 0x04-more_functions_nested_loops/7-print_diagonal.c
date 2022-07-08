#include "main.h"
/**
 * print_diagonal-function to print triangle
 *
 * Description: ...
 * @size: size of triangle
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
putchar(' ');
}
putchar('\\');

putchar('\n');
}
putchar('\n');
}
