/**
 *_memcpy-copy to memory
 *@dest:destination variable
 *@src:variable to be copied
 *@n:the amount to be copied
 *
 *Return: return 0
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
