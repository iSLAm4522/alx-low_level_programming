#include "main.h"
/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to be printed
 *
 * Description: This function prints an integer digit by digit, handling
 * both positive and negative numbers.
 */

void print_number(int n)
{
unsigned int num;

if (n < 0)
{
	_putchar('-');
	num = -n;
}
else
	num = n;
if (num / 10)
	print_number(num / 10);
_putchar(num % 10 + '0');
}
