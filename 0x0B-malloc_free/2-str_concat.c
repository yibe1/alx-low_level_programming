#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */
char *_strncat(char *dt, char *src, int n)
{
int dt_len, a;
for (a = 0; dt[a] != '\0'; a++)
;
dt_len = a;
for (a = 0; a < n && src[a] != '\0'; a++)
dt[dt_len + a] = src[a];
return (dt);
}

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
char *ptr;
int size1, size2, a;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (a = 0; s1[a] != '\0'; a++)
;
size1 = a;
for (a = 0; s2[a] != '\0'; a++)
;
size2 = a;
ptr = malloc(((size1 + size2) +1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
_strncat(ptr, s1, size1);
_strncat(ptr, s2, size2);
ptr += '\0';
return (ptr);
}
