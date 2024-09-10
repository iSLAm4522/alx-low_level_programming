#include "main.h"
/**
* is_prime - Recursively checks if a number is prime
* @num: The number to check
* @divisor: The current divisor being tested
*
* Return: 1 if the number is prime, 0 otherwise
*/

int is_prime(int num, int divisor)
{
if (num < 2)
	return (0);
else if ((divisor * divisor) <= num)
{
	if (num % divisor == 0)
	return (0);
	else
	return (is_prime(num, divisor + 1));
}
else
	return (1);
}
/**
* is_prime_number - Checks if a number is prime
* @n: The number to check
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
