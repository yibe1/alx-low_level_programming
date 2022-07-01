#include <stdio.h>

/**
 * main-is the entry function
 *
 * Description: this is a function that converts alphabets to lowercase
 *
 * Return: returns 0 for success
 *
 */

int main(void)
{
	int i;
	char txt[] = "abcdefghijklmnopqrstuvwxyz\n";
	for (i = 0; i < 26; i++)
	{
		putchar(txt[i]);
	}

	return (0);
}
