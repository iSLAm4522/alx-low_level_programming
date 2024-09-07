#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @str: Pointer to the string to be converted.
*
* Return: The integer representation of the string.
*/

int _atoi(char *str)
{
int sign = 1, i = 0, num = 0;

while (str[i])
{
	if (str[i] == '-')
	sign = -sign;
	else if (str[i] >= '0' && str[i] <= '9')
	{
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i++] - '0');
	}
	break;
	}
	i++;
}
return (num * sign);
}
