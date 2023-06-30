#include "lists.h"

/**
 * list_len - Number of nodes
 * @h: Head node
 *
 * Return: length of nodes
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
