#include "main.h"
/**
 * print_triangle-function to print triangle
 *
 * Description: ...
 * @size: size of triangle
 *
 * Return: nothing
 *
 */

void print_triangle(int size)
{
int i, j, k;
for (i = 0; i < size; i++)
{
for (k = i; k < size - 1; k++)
{
_putchar(' ');
}
for (j = 0; j < i + 1; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
