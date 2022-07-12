/**
 * _strcpy-copies char
 * @dest: dest to be copied
 * @src: source
 *
 * Return: return pointer
 *
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
