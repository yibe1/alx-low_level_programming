/**
 * _isalpha - function that checks for lowercase
 *@c: the character to be checked
 * Description: the function checks for small letter
 *
 * Return: return 1 if c is a letter and alphabet or 0 if not
 *
 */


int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
