#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: The memory area to fill
* @b: The byte to fill with
* @n: Number of bytes to fill
*
* Return: Pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}

	return (s);
}
