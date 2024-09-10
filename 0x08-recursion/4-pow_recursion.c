#include "main.h"
/**
 * _pow_recursion - Recursively calculates x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 *         If y is less than 0, return -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
