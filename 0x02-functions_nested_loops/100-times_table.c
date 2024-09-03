#include "main.h"
/**
* print_number - just print number.
* @num: The number.
*/
void print_number(int num)
{
if (num / 10)
{
	print_number(num / 10);
}
_putchar((num % 10) + '0');
}
/**
* print_times_table -  prints the n times table, starting with 0.
* If n is greater than 15 or less than 0 the function should not print anything
* @n: The number to be used for the times table.
*/
void print_times_table(int n)
{
int i = 0, j;

if (n < 0 || n > 15)
	return;
if (n == 0)
{
	_putchar('0');
return;
}
while (i <= n)
{
	_putchar('0'), _putchar(','), _putchar(' ');
	j = 1;
	while (j <= n)
	{
	int product = i * j;

	if (product < 10)
	{
		_putchar(' '), _putchar(' '), _putchar(product + '0');
	}
	else if (product < 100)
	{
		_putchar(' ');
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
	}
	else
	{
		print_number(product);
	}
	if (j != n)
	{
		_putchar(','), _putchar(' ');
	}
	j++;
	}
	_putchar('\n');
	i++;
}
}
