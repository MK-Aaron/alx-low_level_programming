#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrives value associated with a key
 * @ht: hash table to retrieve from
 * @key: key associated with the value
 * Return: Value asscociated with key || NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
