#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src to dest, including the
 * terminating null byte (\0).
 * @dest: Pointer to the buffer where the string will be copied.
 * @src: Pointer to the source string to be copied.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*(src + i))
{
	*(dest + i) = *(src + i);
	i++;
}
*(dest + i) = '\0';
return (dest);
}
