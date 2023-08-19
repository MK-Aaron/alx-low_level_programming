#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a node at the start of list
 * @head: pointer to first node
 * @n: value to add in the new node
 * Return: pointer to new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL; 
	new_nod->next = *head;

	if (*head != NULL)
		(*head)->prev = new_nod;

	*head = new_nod;

	return (*head);
}
