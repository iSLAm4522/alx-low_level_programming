#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to a new string containing all arguments,
 *         each followed by a newline ('\n').
 *         Returns NULL if ac == 0, av == NULL, or if memory allocation fails.
 */

char *argstostr(int ac, char **av)
{
int i = 0, j, k = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);
while (i < ac)
{
len += strlen(av[i]) + 1;/* +1 for \n */
i++;
}
str = malloc(sizeof(char) * (len + 1));/* +1 for \0 */
if (str == NULL)
return (NULL);
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
	str[k++] = av[i][j++];
str[k++] = '\n';
i++;
}
str[k] = '\0';
return (str);
}
