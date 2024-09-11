#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: The string to search
* @accept: The prefix to measure
*
* Return: Number of bytes in the initial segment of s which
* consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				break;
		}
		if (!*a)
			break;
		len++;
		s++;
	}

	return (len);
}
