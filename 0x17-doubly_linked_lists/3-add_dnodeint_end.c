#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: element to be added
 *
 * Return: address of the new element || NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
