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
int n = 0, j;
int i = 0, c;
char t;
while (str[n] != '\0')
{
if (n % 2 != 0)
continue;
_putchar(str[n]);  
n++;
}
_putchar('\n');
}
