#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints
 * @argc: The arg counter
 * @argv: The arg values
 * Return: Always 0
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
