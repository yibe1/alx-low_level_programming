#include "main.h"

/**
 * swap_int-swaps integers
 * @a:number1
 * @b:number2
 *
 * Return: returns nothing
 *
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
