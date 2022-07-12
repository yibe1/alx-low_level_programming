#include <stdio.h>
/**
 * print_array-str length
 * @str:first char
 * @n:n to be printed
 *
 * Return: return string length
 *
 */

void print_array(int *str, int n)
{
int i = 1;
if (n > 0)
{
printf("%d", str[0]);
while (str[i] != '\0')
{
if (i >= n)
break;
printf(", ");
printf("%d", str[i]);
i++;
}
}
printf("\n");
}
