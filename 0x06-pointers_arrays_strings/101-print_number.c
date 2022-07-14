include "main.h"
/**
 *print_number-prints number
 *@n:number to be printed
 *
 *Return:nothing
 *
 */

void print_number(int n)
{
char a[] = n + '0';
int i = 0;

while (a[i] != '\0')
{
_putchar(a[i]);
i++;
}
}
