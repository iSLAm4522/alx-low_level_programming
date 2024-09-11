#include "main.h"
/**
* _strncpy - copies up to n characters of the string src to dest
* @dest: The destination string
* @src: The source string
* @n: Number of characters to copy
*
* Return: Pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && *src)
	{
		*ptr++ = *src++;
	}
	while (n-- >= 0)
	{
		*ptr++ = '\0';
	}

	return (dest);
}
