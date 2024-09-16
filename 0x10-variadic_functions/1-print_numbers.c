#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *sep = (char *)separator ? (char *)separator : "";
va_start(args, n);
for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d%s", va_arg(args, int), sep);
else
printf("%d", va_arg(args, int));
}
printf("\n");
va_end(args);
}
