#include <stdio.h>

/**
 * main-starting point
 *
 * Description: this program prints possible combinations
 *
 * Return: return 0 for success
 *
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i > 8)
{
putchar('\n');
break;

}
putchar(',');
putchar(' ');
}
return (0);
}
