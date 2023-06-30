#include "lists.h"

/**
 * add_node - add a new nodes at the begining of a list
 * @head: First node
 * @str: String inside the node
 *
 * Return: Address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	len = strlen(str);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
