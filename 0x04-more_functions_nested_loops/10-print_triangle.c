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
for (i = 0; i < size; i++)
{

for (k = 0; k < size - i + 1; k++)

_putchar(' ');
 }
for (j = 0; j < i + 1; j++)
{
_putchar('#');
}
return (0);
}
     
