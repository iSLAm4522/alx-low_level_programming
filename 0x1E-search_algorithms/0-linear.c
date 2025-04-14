#include "search_algos.h"

/**
* linear_search - Searches for a value in an array of integers using
*                the Linear search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: The first index where value is located, or -1 if not found
*         or if array is NULL.
*/
int linear_search(int *array, size_t size, int value)
{

	size_t index = -1, i;

	if (array == NULL)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			return (index);
		}
	}
	return (index);
}
