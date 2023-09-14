#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print elements in a list
 * @h: pointer to first node
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nod = 0;

	while (h != NULL)
	{
		nod++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nod);
}
