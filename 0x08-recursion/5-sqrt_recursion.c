#include "main.h"

/**
 * test - .............
 * @g:.......
 * @c: .........
 *
 * Return: ............
 */
int test(int g, int c)
{
if (g * g == c)
return (g);
if (g * g > c)
return (-1);
return (test(g + 1, c));
}

/**
 * _sqrt_recursion - ..........
 * @n: ...........
 *
 * Return: .............
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (test(1, n));
}
