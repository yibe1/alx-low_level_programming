/**
 * _strcmp-concatenating strings
 *@s1: var1
 *@s2:sdf
 *
 * Return: char
 *
 */

int _strcmp(char *s1, char *s2)
{
int j = 0;
int c1 = 0, c2 = 0;
while (s1[j] != '\0')
{
c1 = c1 + s1[j];
j++;
}
j = 0;
while (s2[j] != '\0')
{
c2 = c2 + s2[j];
j++;
}

return (c1 - c2);
}
