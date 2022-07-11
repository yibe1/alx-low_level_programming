#include "main.h"

/**
 * puts_half-str length
 * @str:first char
 *
 * Return: return string length
 *
 */

void puts_half(char *str)
{
int i = 0, n;

while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
n = i / 2;
}
else
{
n = (i - 1) / 2;
n++;
}
while (n < i)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
