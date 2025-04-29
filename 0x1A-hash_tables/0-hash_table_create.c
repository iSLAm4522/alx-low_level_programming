#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - Creates a new hash table
* @size: Size of the hash table array
*
* Return: Pointer to the newly created hash table, or NULL if failed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *new_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));

	if (!new_table->array)
		return (NULL);
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
