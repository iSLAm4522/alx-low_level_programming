#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase
* @str: Pointer to the string to be modified
*
* Return: Pointer to the modified string (str)
*/

char *string_toupper(char *str)
{
int i = 0;

while (str[i])
{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
	i++;
}

return (str);
}
