#include "lists.h"

/**
 * sum_listint - Returns sums of all elements in list
 * @head: pointer to first node
 * Return: If list empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
