#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints strings separated by a separator,
 * followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
const char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (separator != NULL && i < (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(args);
}
