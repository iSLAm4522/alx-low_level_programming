#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet, in lowercase,
* followed by a new line, 10 times.
* Return : void
*/
void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
i++;
}
}
