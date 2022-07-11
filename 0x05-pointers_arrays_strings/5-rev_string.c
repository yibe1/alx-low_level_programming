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
char ch[n];
int i = 0;
while (i < n)
{
ch[i] = str[i];
i++;
}

while (n > 0)
{
*str = ch[n];
n--;
}
_putchar('\n');
}
