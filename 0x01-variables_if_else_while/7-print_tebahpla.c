#include <stdio.h>

/**
 * main-start of function
 *
 * Description: this program prints alphabets in reverse order
 *
 * Return: 0 for success
 *
 */

int main(void)
{
int i;
char txt[] = "abcdefghijklmnopqrstuvwxyz\n";
for (i = 26; i >= 0; i--)
{
putchar(txt[i]);
}
return (0);
}
