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
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
