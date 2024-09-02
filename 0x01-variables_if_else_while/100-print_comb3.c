#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;

while (i < 9)
{
	int j = i + 1;

	while (j < 10)
	{
	putchar(i + 48);
	putchar(j + 48);
	if (i != 8)
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
