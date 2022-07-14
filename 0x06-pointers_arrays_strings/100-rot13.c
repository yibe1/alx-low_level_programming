/**
 * rot13-concatenating strings
 *@a: var1
 *
 * Return: char
 *
 */

char *rot13(char *a)
{
int i = 0, j;
char ar1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ar2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


while (a[i] != '\0')
{
for (j = 0; j < 52; j++)
if (a[i] == ar1[j])
{
a[i] = ar2[j];
}
i++;
}
return (a);
}
