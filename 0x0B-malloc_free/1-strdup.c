#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory
*           which contains a copy of the string given as a parameter.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL if str is NULL
*         or if insufficient memory is available.
*/

char *_strdup(char *str)
{
int i = 0;
char *new_str;
unsigned int len;

if (str == NULL)
	return (NULL);
len = strlen(str);
new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
	return (NULL);
while (*(str + i))
{
	*(new_str + i) = *(str + i);
	i++;
}
*(new_str + i) = '\0';
return (new_str);
}
