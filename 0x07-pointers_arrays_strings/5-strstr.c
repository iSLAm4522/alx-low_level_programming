#include "main.h"
/**
* _strstr - Locates a substring in a string
* @haystack: The main string to search in
* @needle: The substring to search for
*
* Return: A pointer to the beginning of the located substring,
*         or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j;

if (*needle == '\0')
{
	return (haystack);
}
while (haystack[i])
{
	j = 0;

	while (needle[j])
	{
	if (haystack[i + j] != needle[j])
		break;
	j++;
	}
	if (needle[j] == '\0')
	return (haystack + i);
	i++;
}
return (0);
}
