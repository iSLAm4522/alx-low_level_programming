#include "main.h"

/**
* _strstr - locates a substring
* @haystack: The string to search
* @needle: The substring to locate
*
* Return: Pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{

if (!*needle)
	return (haystack);
while (*haystack)
{
	char *h = haystack;

	char *n = needle;

	while (*h && *n && *h == *n)
	{
	h++;
	n++;
	}
	if (!*n)
	return (haystack);
	haystack++;
}
return (0);
}
