#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: The number of elements in the array.
 * @cmp: Function pointer to the comparison function.
 *
 * Return: The index of the first element for which cmp function
 * returns non-zero. If no element matches or if size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index = -1;
if (size <= 0)
	return (-1);
if (array != NULL && cmp != NULL)
	while (++index < size)
	if (cmp(array[index]) != 0)
		return (index);
return (-1);
}
