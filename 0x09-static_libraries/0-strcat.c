#include "main.h"

/**
* _strncat - concatenates two strings up to n bytes
* @dest: The destination string
* @src: The source string
* @n: Number of bytes to concatenate
*
* Return: Pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move ptr to the end of dest string */
	while (*ptr)
	{
		ptr++;
	}

	/* Append n characters of src to dest */
	while (n-- && *src)
	{
		*ptr++ = *src++;
	}

	/* Null-terminate the result */
	*ptr = '\0';

	return (dest);
}
