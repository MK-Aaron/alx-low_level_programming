#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - RETURNS THE NTH NODE
 * @head: pointer to first node
 * @index: nth node
 * Return:: Nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL && count <= index)
	{
		if (index == count)
			return (tmp);
		tmp = tmp->next;
		count++;
	}

	return (NULL);
}
