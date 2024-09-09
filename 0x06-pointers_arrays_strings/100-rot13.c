#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string to be encoded
 *
 * Description: This function replaces each letter in the string with
 * the letter
 * 13 positions ahead in the alphabet, wrapping around if necessary.
 *
 * Return: Pointer to the modified string (str)
 */

char *rot13(char *str)
{
int i = 0, j;

char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[i])
{
	j = 0;

	while (from[j])
	{
	if (str[i] == from[j])
	{
		str[i] = to[j];
		break;
	}
	j++;
	}
	i++;
}
return (str);
}
