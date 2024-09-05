#include <stdio.h>
/**
* main - Entry point
* Description: This program finds and prints the largest prime factor
* of the number 612852475143.
*
* Return: Always 0 (Success)
*/

int main(void)
{
long number = 612852475143, factor = 2, largestPrimeFactor = -1;

while (number != 1)
{
	while (number % factor == 0)
	{
		largestPrimeFactor = factor;
		number /= factor;
	}
	factor++;
}
printf("%ld\n", largestPrimeFactor);
return (0);
}
