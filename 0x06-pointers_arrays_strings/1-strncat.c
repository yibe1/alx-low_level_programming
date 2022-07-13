/**
 * _strncat-concatenating strings
 *@dest: var1
 *@src:var2
 *@n:amount
 *
 * Return: char
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (1 == 1)
{
if (dest[i] == '\0')
{
while (j < n || src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
if (src[j] == '\0')
break;
}
dest[i] = '\0';
break;
}
else
{
i++;
}
}
return (dest);
}
