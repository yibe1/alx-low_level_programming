#include <stdio.h>

/**
 * main-is a function to start the program
 *
 * Description: This program prints alphabets with some exception
 *
 * Return: 0 for success
 *
 */

int main(0)
{
	char txt[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i;

	for (i = 0; i<26; i++)
	{
		if (txt[i] == 'q' || txt[i] == 'e') continue;

		putchar( txt[i] );

	}
	return (0);
}
