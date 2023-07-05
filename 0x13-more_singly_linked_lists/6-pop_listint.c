#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: pointer of the first node
 * Return: heads nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!(*head)) /* Check if NULL */
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}
