#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch = 48;

while (ch <= 57)
{
	putchar(ch);
	if (ch != '9')
	{
	putchar(',');
	putchar(' ');
	}
	ch++;
}
putchar('\n');
return (0);
}
