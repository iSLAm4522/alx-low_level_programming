#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0, j;

while (i < 99)
{
	j = i + 1;
	while (j < 100)
	{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	putchar(' ');
	putchar(j / 10 + '0');
	putchar(j % 10 + '0');
	if (i != 98)
	{
		putchar(',');
		putchar(' ');
	}
	j++;
	}
	i++;
}
putchar('\n');
return (0);
}
