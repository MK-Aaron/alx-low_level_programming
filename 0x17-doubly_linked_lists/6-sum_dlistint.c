#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of elements inside a list
 * @head: pointer to first node
 * Return: sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
