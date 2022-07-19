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
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);
}
