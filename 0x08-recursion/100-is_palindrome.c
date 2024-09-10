#include "main.h"
/**
* _strlen_recursion - Returns the length of a string
* @s: The string to measure
*
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
if (!*s)
	return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* is_palindrome_helper - Helper function to check if a string is a palindrome
* @str: The string to check
* @start: The starting index for comparison
* @end: The ending index for comparison
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome_helper(char *str, int start, int end)
{
if (start < end)
{
	if (str[start] != str[end])
	return (0);
	return (is_palindrome_helper(str, start + 1, end - 1));
}
return (1);
}

/**
* is_palindrome - Checks if a string is a palindrome
* @s: The string to check
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len == 0)
	return (1);
return (is_palindrome_helper(s, 0, len - 1));
}
