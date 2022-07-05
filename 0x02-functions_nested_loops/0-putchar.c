#include <stdio.h>

/**
 * main-start of the function
 *
 * Description: program that prints _putchar
 *
 * Return: returns 0 for success
 *
 */


int main(void)
{
char ch[] = "_putchar\n";
int i, n;
n = (int) sizeof(ch);
for (i = 0; i < n; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
