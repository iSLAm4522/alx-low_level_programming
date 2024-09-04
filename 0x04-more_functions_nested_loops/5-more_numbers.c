#include "main.h"

/**
* print_number - prints an integer.
* @n: The integer to print.
* Return: void
*/

void print_number(int n)
{
if (n / 10)
	print_number(n / 10);
_putchar((n % 10) + '0');
}

/**
* more_numbers - prints 10 times the numbers from 0 to 14,
* followed by a new line.
* Return: void
*/
void more_numbers(void)
{
int i = 0;

while (i < 10)
{
	int num = 0;

	while (num <= 14)
	{
	if (num < 10)
		_putchar(num + '0');
	else
		print_number(num);
	num++;
	}
_putchar('\n');
i++;
}
}
