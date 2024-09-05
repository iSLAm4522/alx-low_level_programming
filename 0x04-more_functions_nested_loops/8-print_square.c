#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: The size of the square.
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row = 0, col;
while (row < size)
{
col = 0;
while (col < size)
_putchar('#'), col++;
_putchar('\n'), row++;
}
}
}
