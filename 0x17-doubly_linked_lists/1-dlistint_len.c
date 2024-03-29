#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Return number of elements in a linked list
 * @h: Pointer to first node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nod = 0;

	while (h != NULL)
	{
		nod++;
		h = h->next;
	}

	return (nod);
}
