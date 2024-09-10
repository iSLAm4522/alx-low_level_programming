#include "main.h"
/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: The string to be searched
* @accept: The string containing the bytes to match
*
* Return: A pointer to the byte in `s` that matches one of the bytes in
* `accept`, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (s[i])
{
	j = 0;
	while (accept[j])
	{
	if (s[i] == accept[j])
		return (s + i);
	j++;
	}
i++;
}
return (0);
}
