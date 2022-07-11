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
int i = 0;
char t;
while (str[n] != '\0')
{
n++;
}

while (i < n)
{
t = str[i];
str[n - i] = t;
i++;
}
_putchar('\n');
}
