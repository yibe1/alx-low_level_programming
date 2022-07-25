#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function to return pointer
 * @str: pointer to string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
char *ptr;
int size;
int x;
int a;
if (str == NULL)
{
return (NULL);
}
for (a = 0; s[a] != '\0'; a++)
{
}
size = a + 1;
ptr = malloc(size * sizeof(char));
x = 0;
while (x < size)
{
if (ptr == NULL)
{
return (NULL);
}
ptr[x] = str[x];
x++;
}
return (ptr);
}
