#include "lists.h"

/**
 * add_nodeint - Adds new nodes at the begining
 * @head: pointer to first node
 * @n: element to add inside the node
 * Return: address of new element or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
