#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words from.
*
* Return: The number of words in the string.
*/

int count_words(const char *str)
{
int cnt = 0, i = 0, len, in_word = 0;

len = strlen(str);
while (i < len)
{
	if (!isspace(str[i]) && !in_word)
	{
	in_word = 1;
	cnt++;
	}
	else if (isspace(str[i]))
	in_word = 0;
	i++;
}
return (cnt);
}

/**
* strtow - Splits a string into words.
* @str: The input string to split.
*
* Return: Pointer to an array of strings (words), or NULL on failure.
*/

char **strtow(char *str)
{
int word_count, i = 0, j, k = 0, word_len;

char **words;

if (str == NULL || *str == '\0')
	return (NULL);
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
	return (NULL);
while (i < word_count)
{
	while (isspace(str[k]))
	k++;
	word_len = 0;
	while (str[k + word_len] && !isspace(str[k + word_len]))
	word_len++;

	words[i] = malloc((word_len + 1) * sizeof(char));
	if (words[i] == NULL)
	{
	for (j = 0; j < i; j++)
		free(words[j]);
	free(words);
	return (NULL);
	}
	for (j = 0; j < word_len; j++, k++)
	words[i][j] = str[k];
	words[i][word_len] = '\0';
	i++;
}
words[i] = NULL;

return (words);
}
