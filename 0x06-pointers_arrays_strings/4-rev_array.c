/**
 * _strcmp-concatenating strings
 *@a: var1
 *@n:sdf
 *
 * Return: char
 *
 */

void reverse_array(int *a, int n)
{
  int i = 0, mid, t;
mid = n / 2;
while (i < mid)
{
t = a[i];
a[i] = a[n - 1];
a[n - 1] = t;
}
}
