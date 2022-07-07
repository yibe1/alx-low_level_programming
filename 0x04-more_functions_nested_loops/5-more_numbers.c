#include "main.h"

/**
 * more_numbers-function that checks for lowercase
 *
 * Description: the function checks for small letter
 *
 * Return: ..
 *
 */

void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
for (j = 0; j < 15; j++)
{
_putchar(j + '0');
j++;
}
i++;
_putchar('\n');
}
_putchar('\n');
}
