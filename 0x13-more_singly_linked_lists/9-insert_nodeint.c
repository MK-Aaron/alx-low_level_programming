#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: pointer to first node
 * @index: nth node
 * Return: NULL if node is NULL else the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	i = 0;
	while (i != (index - 1) && head)
	{
		head = head->next;
		i++;
	}

	return (head);
}

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the first node
 * @idx: nth node to be added at
 * @n: element of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node;

	if (!*head)
		return (NULL);

	node = get_nodeint_at_index(*head, idx);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = node->next;
	node->next = new;

	return (new);
}
