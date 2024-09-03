#include <stdio.h>
/**
* main - Entry point.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int first = 1, second = 2, current;

int cnt = 2;

printf("%lu, %lu", first, second);
while (cnt < 50)
{
	current = first + second;
	printf(", %lu", current);
	first = second;
	second = current;
	cnt++;
}
putchar('\n');
return (0);
}
