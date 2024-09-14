#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated space in memory containing s1
 * followed by the first n bytes of s2, and null-terminated.
 * If memory allocation fails,return NULL. If n is greater or
 * equal to the length of s2, use the entire s2.
 * If either string is NULL, treat it as an empty string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;

unsigned int len1, len2, i = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);
if (n > len2)
	n = len2;
str = malloc((len1 + n + 1) * sizeof(char));
if (str == NULL)
	return (NULL);
while (i < len1)
{
	str[i] = s1[i];
	i++;
}
while (i < (len1 + n))
{
	str[i] = s2[i - len1];
	i++;
}
str[i] = '\0';
return (str);
}
