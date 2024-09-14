#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated memory.
 * The memory is set to zero. If nmemb or size is 0, returns NULL.
 * If malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *str;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
	return (NULL);
str = (char *)ptr;
while (i < nmemb * size)
str[i++] = 0;

return (str);
}
