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
if(i == 0)
if ((a[i] >= 'a' && a[i] <= 'z'))
{
a[i] = a[i] - 32;
continue;
i++;
}
if (a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' ||
a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}' ||
a[i] == ' ' || a[i] == '\n' || a[i] == '\t')
{
i++;
if (a[i] >= 97 && a[i] <= 122)
{
a[i] = a[i] - 32;
}
}
else
i++;
/*
 *else if(a[i] >= 65 && a[i] <= 90)
 *{
 *a[i] = a[i] + 32;
 *i++;
 *
 }*/
}
return (a);
}
