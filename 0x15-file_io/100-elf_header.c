#include <stdio.h>

/**
 * main - The entry 
 * @argc: number of arguments
 * @argv: The pointer
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);
return (1);
}
