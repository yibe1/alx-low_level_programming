#include "holberton.h"

/**
 * _strlen -...........
 * @str:.........
 *
 * Return:.......
 */
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}

/**
 * test -..........
 * @l: .......
 * @r: .......
 * @p: .........
 *
 * Return: ............
 */
int test(int l, int r, char *p)
{
if (l >= r)
return (1);
else if (p[l] != p[r])
return (0);
else
return (test(l + 1, r - 1, p));
}

/**
 * is_palindrome -........
 * @s:....
 *
 * Return: .......
 */
int is_palindrome(char *s)
{
int i;
i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
