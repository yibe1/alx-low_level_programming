#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - convert arguments to strings
 * @ac: int type
 * @av: pointer to array
 * Return: arguments as strings
 */

char *argstostr(int ac, char **av)
{
int size, i, j, l = 0;
char *ptr;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
size += 1;
}
size += 1;
}
size += 1;
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
ptr[l] = av[i][j];
l++;
}
ptr[l] = '\n';
l++;
}
ptr[l] = '\0';
return (ptr);
}
