/**
 * _strcmp-concatenating strings
 *@s1: var1
 *@s2:sdf
 *
 * Return: char
 *
 */

int *_strcmp(char *s1, char *s2)
{
int j = 0;

while (s1[j] != '\0' || s2[j] != '\0')
{
if (src[j] == s2[j])
{
j++;
continue;
}
else if (src[j] < s2[j])
{
return (-1);
}
else
return (1);

}
return (0);
}
