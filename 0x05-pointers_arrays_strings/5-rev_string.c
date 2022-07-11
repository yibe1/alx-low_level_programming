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
int n = 0, j;
int i = 0, c;
char t;
while (str[n] != '\0')
{
n++;
}
j = n - 1;
c = n/2;
while (i < c)
{
t = str[j];
str[j] = str[i];
str[i] = t;
j--;
i++;
}

_putchar('\n');
}
