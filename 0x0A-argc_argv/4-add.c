#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - ...............
 * @argc: The arg
 * @argv: The arg
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int num, result = 0, i;

while (argc-- > 1)
{
for (i = 0; argv[argc][i]; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[argc]);
result += num;
}
printf("%d\n", result);
return (0);
}
