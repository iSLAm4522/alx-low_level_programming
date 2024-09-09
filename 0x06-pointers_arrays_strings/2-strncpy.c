#include "main.h"

/**
* _strncpy - Copies a string up to n bytes
* @dest: Pointer to the destination array where the content is to be copied
* @src: Pointer to the source string to be copied
* @n: Maximum number of bytes to be copied from src
*
* Return: Pointer to the destination string (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while ((i < n) && *(src + i))
{
	*(dest + i) = *(src + i);
	i++;
}
while (i < n)
{
	*(dest + i) = '\0';
	i++;
}
return (dest);
}
