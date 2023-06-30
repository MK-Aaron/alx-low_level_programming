#include "lists.h"

/**
 * add_node_end - add nodes at the end
 * @head: first node
 * @str: string to store
 * Return: address of new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	size_t len;

	len = strlen(str);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
