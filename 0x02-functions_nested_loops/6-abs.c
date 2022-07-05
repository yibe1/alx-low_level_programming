/**
 * _abs - will return the absolute value of a number
 *
 * Description: this function will returrn the absolute value of a number
 * @x: integer value to be submitted
 *
 * Return: will return a value
 *
 */

int _abs(int x)
{
int n;
if (x < 0)
n = x * -1;
else if (x >= 0)
n = x;
return (n);

}
