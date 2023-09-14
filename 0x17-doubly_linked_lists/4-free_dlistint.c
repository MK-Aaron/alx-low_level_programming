#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly list
 * @head: Pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
