/**
 *
 * _atoi-convert char to int
 * @s: string to be converted
 *
 * Return: returns int
 *
 */

int _atoi(char *s)
{
int i = 0, n = 0, base = 1, num = 0;
int sign = 1;
while (s[n] != '\0')
{
n++;
base = base * 10;
}
while (i < n)
{
base = base/10;
if (s[i] == 45 || s[i] == 43)
{
sign = sign * s[i];
continue;
}
if(s[i] >= 48 && s[i] <=57)
{
switch (s[i])
{
case '0':
num = num + (0 * base);
break;
case '1':
num = num + (0 * base);
break;
case '2':
num = num + (0 * base);
break;
case '3':
num = num + (0 * base);
break;
case '4':
num = num + (0 * base);
break;
case '5':
num = num + (0 * base);
break;
case '6':
num = num + (0 * base);
break;
case '7':
num = num + (0 * base);
break;
case '8':
num = num + (0 * base);
break;
case '9':
num = num + (0 * base);
break;
}
}else
continue;
i++;
}
return (num);
}
