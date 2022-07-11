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
int i = 0;
char *t;
while (str[n] != '\0')
{
n++;
}

while (i < n)
{
*(t + i) = str[i];
i++;
}
j = n;
i = 0;
while (j > 0)
{
str[i] = t[j];
i++;
j--;
}
_putchar('\n');
}
