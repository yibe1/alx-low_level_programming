#include <stdio.h>

void print_alphabet(void);
/**
 * main-start of program
 *
 * Description: using prototypes
 *
 * Return: return 0 for success
 *
 */

int main(void)
{
print_alphabet();
return 0;
}

/**
 * print_alphabet-start of program
 *
 * Description: using prototypes
 *
 * Return: nothing
 *
 */
void print_alphabet(void)
{
int i;
char ch[] = "abcdefghijklmnopqrstuvwxyz\n";
for (i = 0; i < 27; i++)
{
putchar(ch[i]);
}
}
