#include "main.h"
/**
 * _sqrt_recursion1 - Helper function to recursively calculate square root
 * @num: The number whose square root is to be calculated
 * @guess: Current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n does not
 * have a natural square root
 */

int _sqrt_recursion1(int num, int guess)
{
if (num == guess * guess)
	return (guess);
if (num < guess * guess)
	return (-1);
return (_sqrt_recursion1(num, guess + 1));
}

/**
 * _sqrt_recursion - Recursively calculates the natural square root of a number
 * @n: The number whose square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if n does not
 * have a natural square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recursion1(n, 1));
}
