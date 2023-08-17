#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: pointer
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
