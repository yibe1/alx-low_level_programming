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
int i;
for (i = 0; i < sizeof(ch); i++)
{
putchar(ch[i]);
}
return (0);
}
