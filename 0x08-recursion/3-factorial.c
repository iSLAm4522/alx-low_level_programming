#include "main.h"
/**
 * factorial - Recursively calculates the factorial of a given number
 * @n: The number whose factorial is to be calculated
 *
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);

return (n * factorial(n - 1));
}
