#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int i = 0, j;

while (i <= 9)
{
j = 0;
while (j <= 9)
{
	int product = i * j;

	if (product < 10 && j != 0)
	{
	_putchar(' ');
	_putchar(product + '0');
}
else if (product >= 10)
{
	_putchar(product / 10 + '0');
	_putchar(product % 10 + '0');
}
else
{
	_putchar(product + '0');
}
if (j != 9)
{
	_putchar(',');
	_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}
