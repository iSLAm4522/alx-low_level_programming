#include "hash_tables.h"
#include <stdlib.h>


/**
* hash_table_delete - Deletes a hash table.
* @ht: The hash table to delete.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
    hash_node_t* current_item;

	if (!ht)
		return;

	index = 0;
	while (index < ht->size)
	{
        current_item = ht->array[index];
		while (current_item)
		{
            hash_node_t *to_delete = current_item;
            current_item = current_item->next;
            free(to_delete->key);
            free(to_delete->value);
            free(to_delete);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
