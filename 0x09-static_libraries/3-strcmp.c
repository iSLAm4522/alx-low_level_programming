#include "main.h"
/**
* _strcmp - compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: 0 if strings are equal, otherwise the difference between them
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
