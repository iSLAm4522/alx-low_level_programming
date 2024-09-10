#include "main.h"
/**
 * _puts_recursion - Recursively prints a string followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function uses recursion to print each character
 * of the string until it reaches the null terminator, at which point
 * it prints a new line and returns.
 */

void _puts_recursion(char *s)
{
if (!*s)
{
	_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
