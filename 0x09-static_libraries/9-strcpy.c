#include "main.h"
/**
* _strcpy - copies the string pointed to by src to dest
* @dest: The destination string
* @src: The source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while ((*ptr++ = *src++))
		;
	return (dest);
}
