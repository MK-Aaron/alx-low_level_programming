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
	while (i != index && head)
	{
		head = head->next;
		i++;
	}

	return (head);
}
