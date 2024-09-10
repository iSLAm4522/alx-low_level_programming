#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: 2D array representing the chessboard (8x8)
 *
 * Description: This function prints the 8x8 chessboard
 * passed as an array of 8 rows, each with 8 characters.
 * It uses _putchar to print each character, and prints
 * a new line after each row.
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j;

while (i < 8)
{
j = 0;
while (j < 8)
{
	_putchar((*a)[j]);
	j++;
}
_putchar('\n');
i++;
a++;
}
}
