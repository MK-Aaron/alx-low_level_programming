#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns doubly-list len
 * @h: pointer
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
