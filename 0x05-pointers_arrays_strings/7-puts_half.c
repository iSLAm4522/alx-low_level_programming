#include "main.h"
/**
* puts_half - Prints the second half of a string, followed by a new line.
* @str: Pointer to the string to be processed.
*
*/

void puts_half(char *str)
{
int len = 0, pos;

while (*(str + len))
	len++;
if (len == 0)
{
	_putchar('\n');
return;
}
if (len % 2 == 0)
	pos = len / 2;
else
	pos = ((len - 1) / 2) + 1;

while (str[pos])
	_putchar(str[pos++]);
_putchar('\n');
}
