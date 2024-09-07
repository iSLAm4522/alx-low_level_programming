#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string whose length is to be calculated.
*
* Return: The length of the string.
*/

int _strlen(char *s)
{
int length = 0;

while (*s)
{
	length++;
	s++;
}
return (length);
}
