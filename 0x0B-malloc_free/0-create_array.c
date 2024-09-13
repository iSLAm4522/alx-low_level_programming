#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: A pointer to the newly created array, or NULL if size is 0 or
 * memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ptr;
if (size == 0)
return (NULL);

ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);

while (i < size)
*(ptr + i++) = c;

return (ptr);
}
