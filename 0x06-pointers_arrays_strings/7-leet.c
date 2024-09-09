#include "main.h"
/**
* leet - Encodes a string into 1337 (Leet Speak)
* @str: Pointer to the string to be encoded
*
* Description: This function replaces specific letters in the string with
* corresponding numbers as per the 1337 encoding scheme:
* - a, A -> 4
* - e, E -> 3
* - o, O -> 0
* - t, T -> 7
* - l, L -> 1
*
* Return: Pointer to the modified string (str)
*/

char *leet(char *str)
{
int i = 0, j;

char letters[] = "aAeEoOtTlL";

char numbers[] = "4433007711";

while (str[i])
{
	j = 0;
	while (letters[j])
	{
	if (str[i] == letters[j])
	{
		str[i] = numbers[j];
		break;
	}
	j++;
	}
	i++;
}
return (str);
}
