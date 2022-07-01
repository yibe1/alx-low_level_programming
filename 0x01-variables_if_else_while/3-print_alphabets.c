#include <stdio.h>

/**
 *
 * main-starting point for the program
 *
 * Description: This is a program that displays lower and upper case letters
 *
 * Return: 0 for success
 *
 */

int main(void)
{
	char txt[] = "abcdefghijklmnopqrstuvwxyz";
	char txt2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	int i;

	for(i=0; i<27; i++)
	{
		putchar(txt[i]);
	}

	for(i=0; i<27; i++)
	{
		putchar(txt2[i]);
	}

	return(0);
}
