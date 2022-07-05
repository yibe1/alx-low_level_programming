#include <stdio.h>
#define MAX 10000000000
/**
 * main -..
 * Description: fibonanci
 *
 * Return: 0
 */
int main(void)
{
unsigned long int y1 = 0, x1 = 1, fr2 = 0, x2 = 2;
unsigned long int s1, s2, s3;
int count;

printf("%lu, %lu, ", x1, x2);
for (count = 2; count < 98; count++)
{
if (x1 + x2 > MAX || fr2 > 0 || y1 > 0)
{
s1 = (x1 + x2) / MAX;
s2 = (x1 + x2) % MAX;
s3 = y1 + fr2 + s1;
y1 = fr2, fr2 = s3;
x1 = x2, x2 = s2;
printf("%lu%010lu", fr2, x2);
}
else
{
s2 = x1 + x2;
x1 = x2, x2 = s2;
printf("%lu", x2);
}
if (count != 97)
printf(", ");
}
printf("\n");
return (0);
}
