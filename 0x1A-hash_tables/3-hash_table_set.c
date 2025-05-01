#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* strdup - duplicates a string
* @str: string to duplicate
*
* Return: pointer to new string or NULL if it fails
*/
char *strdup(const char *str)
{
	char *copy;

	copy = malloc(strlen(str) + 1);
	if (!copy)
		return (NULL);

	strcpy(copy, str);

	return (copy);
}

/**
* create_item - Creates a new hash node
* @key: The key for the node
* @value: The value for the node
*
* Return: A pointer to the new node, or NULL on failure
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	if (!item->key || !item->value)
	{
		free(item->key);
		free(item->value);
		free(item);
		return (NULL);
	}

	return (item);
}



/**
* hash_table_set - Adds or updates an element in the hash table
* @ht: The hash table to update
* @key: The key of the element
* @value: The value associated with the key
*
* Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current_item;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	item = create_item(key, value);

	if (!item)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[index];
	while (current_item)
	{
		if (!strcmp(current_item->key, key))
		{
			free(current_item->value);
			current_item->value = strdup(value);
			free(item->key);
			free(item->value);
			free(item);
			return (1);
		}
		current_item = current_item->next;
	}

	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}


