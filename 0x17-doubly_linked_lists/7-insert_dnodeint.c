#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: pointer to pointer of first node
 * @idx: index of new node where it should be added
 * @n: element inside the new node
 * Return: New node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (tmp->next == NULL)
			*h = new;
		else
		{
			new->next = tmp;
			tmp->prev = new;
			*h = new;
		}
	}
	else
	{
		while (tmp != NULL && count <= idx)
		{
			if (idx == count)
			{
				new->prev = tmp->prev;
				new->next = tmp;
				tmp->prev->next = new;
				tmp->prev = new;
				break;
			}
			else if (tmp->next == NULL)
			{
				new->prev = tmp;
				tmp->next = new;
				break;
			}
			tmp = tmp->next;
			count++;
		}
	}

	return (new);
}
