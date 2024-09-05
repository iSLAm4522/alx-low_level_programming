#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: The size of the triangle.
* Return: void
*/

void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int spaces = size - 1, i = 0, j;

while (i < size)
{
	j = 0;
	while (j < spaces)
	_putchar(' '), j++;
	while (j < size)
	_putchar('#'), j++;
	_putchar('\n'), i++, spaces--;
}
}
}
