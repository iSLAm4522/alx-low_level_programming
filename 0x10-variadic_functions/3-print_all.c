#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - Prints various types of arguments based on a format string.
 * @format: A string of characters specifying the types of arguments.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0, len = 0;

char *separator = ", ";

char *str;

while (format && format[len])
len++;
va_start(args, format);
while (i < len)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
	break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
default:
	break;
}
if (i < (len - 1) && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
printf("%s", separator);
i++;
}
printf("\n");
va_end(args);
}
