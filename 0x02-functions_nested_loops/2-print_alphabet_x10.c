#include <stdio.h>

/**
 * print_alphabet_x10-start of program
 *
 * Description: using prototypes
 *
 * Return: nothing
 *
 */
void print_alphabet_x10(void)
{
int i, j;
char ch[] = "abcdefghijklmnopqrstuvwxyz\n";
for(j = 0; j < 10; j++)
for (i = 0; i < 27; i++)
{
putchar(ch[i]);
}
}
