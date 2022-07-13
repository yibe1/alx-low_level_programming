/**
 * _strcat-concatenating strings
 *@dest: var1
 *@src:var2
 *
 * Return: char
 *
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (1 == 1)
{
if (dest[i] == '\0')
{
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
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
