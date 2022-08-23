#include <stdio.h>
#include "main.h"
int _strlen(const char *s);

/**
 * binary_to_uint - a function
 * @b: a pointer to a string
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 */
unsigned int binary_to_uint(const char *b)
{
int len, i = 1;
unsigned int uint = 0, base = 1;
if (b == NULL)
return (0);
len = _strlen(b);
for (; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
uint += base;
base *= 2;
}
return (uint);
}
/**
 * _strlen - a function 
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
		;

return (i);
}
