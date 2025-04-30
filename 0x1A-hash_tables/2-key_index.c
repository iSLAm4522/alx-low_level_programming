#include "hash_tables.h"

/**
* key_index - Gets the index for a key in the hash table
* @key: The key string to hash
* @size: Size of the hash table array
* Return: Index where the key should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
