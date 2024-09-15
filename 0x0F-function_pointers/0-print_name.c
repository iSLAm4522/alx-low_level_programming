#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name using the function passed as a parameter.
 * @name: Pointer to the name string to be printed.
 * @f: Function pointer to a function that prints a string.
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
