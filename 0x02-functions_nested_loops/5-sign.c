/**
 * print_sign - prints the function that returns the result
 *
 * Description: a function that returns the sign of a number
 * @n: the value to be accepted by the function
 *
 * Return: returns 1 if greater than zero, 0 if zero and -1 if less than zero
 *
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
if (n == 0)
{
putchar('0');
return (0);
}
if (n < 0)
{
putchar('-');
return (-1);
}
}
