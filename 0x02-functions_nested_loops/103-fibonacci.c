#include <stdio.h>
/**
* main - Entry point.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int first = 1, second = 2, sumOfEvenValued = second, current;

while (1)
{
	current = first + second;
	if (current > 4000000)
	break;
	if (current % 2 == 0)
	sumOfEvenValued += current;
	first = second;
	second = current;
}
printf("%lu\n", sumOfEvenValued);
return (0);
}
