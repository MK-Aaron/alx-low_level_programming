#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: Hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
