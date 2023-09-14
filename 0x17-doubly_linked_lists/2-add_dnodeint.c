#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: pointer to a pointer of the first node
 * @n: elements to be added in the new node
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp->prev = new;
		new->next = tmp;
		*head = new;
	}

	return (new);
}
