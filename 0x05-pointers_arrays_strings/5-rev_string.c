#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 */

void rev_string(char *s)
{
int len = 0, i = 0;

while (*(s + len))
	len++;
while (i < --len)
{
	char tmp = s[i];

	s[i] = s[len];
	s[len] = tmp;
	i++;
}
}
