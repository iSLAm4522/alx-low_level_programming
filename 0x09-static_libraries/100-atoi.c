#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: The string to convert
*
* Return: The integer value of the string
*/
int _atoi(char *s)
{
	int sign = 1, result = 0;

	/* Skip whitespace characters */
	while (*s == ' ')
		s++;

	/* Check for sign */
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

	/* Convert the string to an integer */
	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
