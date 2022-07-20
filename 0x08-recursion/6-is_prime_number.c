#include "main.h"

/**
 * test -...........
 * @f:..........
 * @p:..............
 *
 * Return:.............
 */
int test(int f, int p)
{
if (p < 2 || p % f == 0)
return (0);
else if (f > p / 2)
return (1);
else
return (test(f + 1, p));
}

/**
 * is_prime_number -.........
 * @n:............
 *
 * Return:............
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (test(2, n));
}
