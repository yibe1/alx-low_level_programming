/**
 * string_toupper-concatenating strings
 *@a: var1
 *
 * Return: char
 *
 */

char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] >= 97 && a[i] =< 122)
{
a[i] = a[i] - 32;
}
 
i++;
}
return (*a);
}
