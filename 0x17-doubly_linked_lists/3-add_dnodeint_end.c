#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to pointer of the first node
 * @n: element inside new node
 * Return: new node else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		(*head)->prev= new;
		new->next = *head;
		*head = new;
	}

	return (new);
}
