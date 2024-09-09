#include "main.h"
/**
* _strspn - Gets the length of a prefix substring
* @s: The string to be searched
* @accept: The string containing the bytes to match
*
* Return: The number of bytes in the initial segment of `s`
*         which consist only of bytes from `accept`
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, found;

unsigned int cnt = 0;

while (s[i])
{
	j = 0, found = 0;
	while (accept[j])
	{
	if (s[i] == accept[j])
	{
		cnt++;
		found = 1;
		break;
	}
	j++;
	}
	if (!found)
	break;
	i++;
}
return (cnt);
}
