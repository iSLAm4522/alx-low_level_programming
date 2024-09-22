#include "main.h"
/**
 * count_ones - Counts the number of 1s (set bits) in an unsigned long int
 * @num: The unsigned long integer to count the set bits in
 *
 * Return: The count of 1 bits in the binary representation of num
 */

unsigned int count_ones(unsigned long int num)
{
unsigned int count = 0;
if (num > 1)
count = count_ones(num >> 1);

return (count + (num & 1));
}


/**
 * flip_bits - Returns the number of bits you need to flip to get from n to m
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: The number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num = n ^ m;
return (count_ones(num));
}
