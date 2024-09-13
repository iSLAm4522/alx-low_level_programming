#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to a newly allocated space in memory which contains
* the contents of s1, followed by the contents of s2,and null terminated.
* If NULL is passed, treat it as an empty string.Return NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, len1, len2;

char *str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

str = malloc(sizeof(char) * (len1 + len2 + 1));
if (str == NULL)
	return (NULL);
while (i < len1)
{
	*(str + i) = *(s1 + i);
	i++;
}
i = 0;
while (i < len2)
{
	*(str + len1 + i) = *(s2 + i);
	i++;
}
str[len1 + len2] = '\0';
return (str);
}
