#include "main.h"

/**
 * rev_string-str length
 * @str:first char
 *
 * Return: return string length
 *
 */

void rev_string(char *str)
{
int n = 0;
while (str[n] != '\0')
{
n++;
}

while (n > 0)
{
_putchar(str[n - 1]);
n--;
}
_putchar('\n');
}
