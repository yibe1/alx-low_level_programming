#include <stdio.h>
/**
 * main-fizz-buzz
 *
 * Description: prints fizz-buzz
 *
 * Return: 0
 *
 */

int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 5 == 0 && i % 3 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if(i < 100)
printf(" ");
}
printf("\n");
}
printf("\n");
return (0);
}
