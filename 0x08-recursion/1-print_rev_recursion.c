#include "main.h"

/**
* _print_rev_recursion - Recursively prints a string in reverse
* @s: Pointer to the string to be printed
*
*/

void _print_rev_recursion(char *s)
{
if (*s)
	_print_rev_recursion(s + 1);
if (*s)
	_putchar(*s);
}
