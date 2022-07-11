#include "main.h"

/**
 * _strlen-str length
 * @s:first char
 *
 * Return: return string length
 *
 */

int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
