#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: The number of times the character '\' should be printed.
* Return: void
*/

void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int spaces = 0, i;

	while (n--)
	{
	i = 0;
	while (i < spaces)
	{
		_putchar(' ');
		i++;
	}
	_putchar('\\');
	_putchar('\n');
	spaces++;
	}
}
}
