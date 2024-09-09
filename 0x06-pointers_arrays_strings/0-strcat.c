#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string,
 * which will hold the concatenated result.
 * @src: Pointer to the source string, which will be appended to
 * the destination string.
 *
 * Return: Pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i = 0;

while (*(dest + len))
	len++;
while (*(src + i))
{
	*(dest + len) = *(src + i);
	len++, i++;
}
return (dest);
}
