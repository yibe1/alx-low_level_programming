#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (!action || !array)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
