#include "main.h"
/**
* print_number - just print number.
* @n: The number.
*/
void print_number(int n)
{
int last_digit = n % 10;

if (n / 10)
{
	print_number(n / 10);
}
if (last_digit < 0)
	last_digit = -last_digit;
_putchar(last_digit + '0');
}
/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line.
* print_number - just print number.
* @n: The starting number.
*/
void print_to_98(int n)
{
if (n == 98)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	_putchar('\n');
return;
}
else if (n < 98)
{
	if (n < 0)
	_putchar('-');
	print_number(n);
	_putchar(',');
	_putchar(' ');
	n++;
}
else if (n > 98)
{
	print_number(n);

	_putchar(',');
	_putchar(' ');
	n--;
}
print_to_98(n);
}
