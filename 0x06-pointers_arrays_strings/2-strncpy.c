/**
 * _strncpy-concatenating strings
 *@dest: var1
 *@src:var2
 *@n:amount
 *
 * Return: char
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

while (j < n)
{
if (src[j] == '\0')
{
dest[j] = '\0';
break;
}
dest[j] = src[j];
j++;

}

return (dest);
}
