#include "main.h"

/**
* _memcpy - copies memory area
* @dest: The destination memory area
* @src: The source memory area
* @n: Number of bytes to copy
*
* Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;

	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}

	return (dest);
}
