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

	if (idx > (dlistint_len(*h)))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new = add_dnodeint(&(*h), n);
		*h = new;
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
				new = add_dnodeint_end(&tmp, n);
				break;
			}
			tmp = tmp->next;
			count++;
		}
	}

	return (new);
}
