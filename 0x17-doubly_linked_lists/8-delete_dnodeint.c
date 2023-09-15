#include <stdlib.h>
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

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: pointer to first node
 * @index: node index to be deleted
 * Return: 1 for success -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int count = 0;

	if (tmp == NULL || index > dlistint_len(tmp))
		return (-1);
	if (index == 0 && tmp->next != NULL)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
	}
	else
	{
		while (tmp != NULL && count <= index)
		{
			if (index == count)
			{
				tmp->next->prev = tmp->prev->prev;
				tmp->prev->next = tmp->next;
				free(tmp);
				break;
			}
			tmp = tmp->next;
			if (tmp == NULL)
			{
				tmp->prev->next = NULL;
				free(tmp);
			}
			count++;
		}
	}
	return (1);
}
