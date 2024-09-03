#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
const char *str = "_putchar";

while (*str)
{
	_putchar(*str);
str++;
}
_putchar('\n');
return (0);
}
