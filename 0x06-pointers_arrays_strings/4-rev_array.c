#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array of integers to be reversed
 * @n: The number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
int i = 0;

while (i < n--)
{
	int temp = a[i];

	a[i] = a[n];
	a[n] = temp;
	i++;
}
}
