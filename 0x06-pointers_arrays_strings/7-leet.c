/**
 * leet-concatenating strings
 *@a: var1
 *
 * Return: char
 *
 */

char *leet(char *a)
{
int i = 0, j;
char ar1[] = {'a','e','o','t','l','A','E','O','T','L'};
char ar2[] = {'4','3','0','7','1','4','3','0','7','1'};

while (a[i] != '\0')
{
for (j = 0; j < 10; j++)
if (a[i] == ar1[j])
{
a[i] = ar2[j];
break;
}
i++;
}
return (a);
}
