/**
 * cap_string-concatenating strings
 *@a: var1
 *
 * Return: char
 *
 */

char *cap_string(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] = ',' || a[i] = ';' ||a[i] = '.' ||a[i] = '!' ||a[i] = '?' ||a[i] = '"' ||a[i] = '(' ||a[i] = ')' ||a[i] = '{' ||a[i] = '}')
{
i++;
if (a[i] >= 97 && a[i] <= 122)
{
a[i] = a[i] - 32;
}
}else
i++;
}
return (a);
}
