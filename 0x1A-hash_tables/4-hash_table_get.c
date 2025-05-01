#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_get - Retrieves a value associated with a key in a hash table.
* @ht: The hash table to search.
* @key: The key to look for.
*
* Return: The value associated with the key, or NULL if the key is not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	hash_node_t *current_item;

	if (!ht || !key || !*key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[index];

	while (current_item)
	{
		if (!strcmp(current_item->key, key))
			return (current_item->value);
		current_item = current_item->next;
	}

	return (NULL);
}
