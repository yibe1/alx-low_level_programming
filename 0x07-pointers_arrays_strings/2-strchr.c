#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: ....
 *
 * Return: a pointer
 *
 */

char *_strchr(char *s, char c)
{
int i = 0;
char *ch;

while (s[i] != '\0')
{
if (s[i] != c)
i++;
else
{
ch = &s[i];
return (ch);
}
}
if (s[i] == c)
{
ch = &s[i];
return (ch);
}
return (NULL);
}
