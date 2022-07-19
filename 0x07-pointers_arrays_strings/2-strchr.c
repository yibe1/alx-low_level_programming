#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: ....
 *
 * Return: a pointer 
 * @s. return ....
 */

char *_strchr(char *s, char c)
{
int i = 0;
 char *c;
 
while (s[i] != '\0')
{
if (s[i] != 'c')
i++;
else
{
c = &s[i];
return (c);
}
}
return (NULL);
}
