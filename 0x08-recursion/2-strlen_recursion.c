#include "main.h"

/**
* _strlen_recursion - Recursively calculates the length of a string
* @s: Pointer to the string whose length is to be calculated
*
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
if (!*s)
	return (0);
return (1 + _strlen_recursion(s + 1));
}
