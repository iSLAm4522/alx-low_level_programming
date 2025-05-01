#include "hash_tables.h"
#include <stdio.h>
/**
* hash_table_print - Prints a hash table.
* @ht: The hash table to print.
*
* Description: Prints the key/value pairs in the hash table
*              in the order they appear in the array.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;

	hash_node_t *node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
