#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all the parameters. If n is 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int num, sum = 0;
va_list args;
if (n == 0)
return (0);

va_start(args, n);
while (i++ < n)
{
num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}
