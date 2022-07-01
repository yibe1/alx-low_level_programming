#include <stdio.h>

/**
 * main-the first fxn in the program
 *
 * Description: this program prints 0-9
 *
 * Return: 0 for success
 *
 */

int main(void)
{
 int i;
 char t[] = "0123456789/n";
 
 for( i = 0; i < 10; i++ )
    {
      putchar(t[i]);
    }

 return (0);
}
