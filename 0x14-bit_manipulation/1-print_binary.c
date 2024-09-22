#include "main.h"
/**
 * print_binary - Prints the binary representation of an unsigned int
 * @n: The unsigned int to print in binary
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);

_putchar((n & 1) ? '1' : '0');
}
