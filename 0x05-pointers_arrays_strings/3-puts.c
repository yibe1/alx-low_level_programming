#include "main.h"

/**
 * _puts-str length
 * @str:first char
 *
 * Return: return string length
 *
 */

void _puts(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
