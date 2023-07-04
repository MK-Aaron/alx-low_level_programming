#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: list of nodes
 * Return: Number of elements i a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
