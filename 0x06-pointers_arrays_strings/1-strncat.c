#include "main.h"
/**
* _strncat - Concatenates two strings using at most n bytes from src
* @dest: Pointer to the destination string,
* which will hold the concatenated result.
* @src: Pointer to the source string,
* which will be appended to the destination string.
* @n: Maximum number of bytes to be used from src
*
* Return: Pointer to the concatenated string (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
int len = 0, i = 0;

while (*(dest + len))
	len++;
while ((i < n) && *(src + i))
{
	*(dest + len) = *(src + i);
	len++, i++;
}
*(dest + len) = '\0';
return (dest);
}
