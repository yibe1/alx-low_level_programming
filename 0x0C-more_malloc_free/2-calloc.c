#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory
 * @nmemb: unsigned int
 * @size: unsigned int 
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int count;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
count = 0;
while (count < nmemb * size)
{
ptr[count] = 0;
count++;
}
return (ptr);
}
