#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (cast as a 1D array)
 * @size: The size of the matrix (number of rows/columns)
 *
 * Description: This function calculates and prints the sums of the
 * main diagonal and the secondary diagonal of a square matrix of integers.
 */

void print_diagsums(int *a, int size)
{
int i = 0, j = size - 1, d1 = 0, d2 = 0;
while (i < (size * size) && (j < (size * size)))
{
d1 += *(a + i);
d2 += *(a + j);
i += size + 1;
j += size - 1;
}
printf("%d, %d\n", d1, d2);
}
