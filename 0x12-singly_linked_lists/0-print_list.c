#include "lists.h"

/**
 * print_list - prints contents in a structure
 * @h: pointer to structure
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
