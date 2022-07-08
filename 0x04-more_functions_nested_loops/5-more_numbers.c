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
int j, t1 = 0, t2;

while (i < 10)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
{
t1 = j;
j = j / 10;
}
_putchar(j + '0');
if (t1 > 0)
{
j = t1;
t1 = 0;
}

if (j > 9)
{
t2 = j % 10;
_putchar(t2 + '0');
}

}
_putchar('\n');
i++;
}

}
