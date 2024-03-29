#include "lists.h"

/**
 * listint_len - returns the number
 * 
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}

return size;
}
