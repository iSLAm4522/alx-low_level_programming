#include "main.h"
/**
* _strlen - returns the length of a string
* @s: The string to compute the length of
*
* Return: The length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
