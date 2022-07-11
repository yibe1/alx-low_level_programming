#include "main.h"

/**
 * puts2-str length
 * @str:first char
 *
 * Return: return string length
 *
 */

void puts2(char *str)
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
}
while (n < i)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
